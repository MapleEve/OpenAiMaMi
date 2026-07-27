# Reverse Evidence Manifest

- archive_path: `raw/aimami/1.2.3/macos-arm64`
- binary: `raw/aimami/1.2.3/macos-arm64/frontend/AiMaMi.arm64.thin`
- binary_sha256: `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21`
- app_bundle: `raw/binary/AiMaMi 1.2.3.app`
- feature: `unknown`
- frontend_root: `raw/aimami/1.2.3/macos-arm64/dumped`
- created_at: `2026-07-21T02:33:28Z`
- tmp_scratch: `/var/folders/2x/3sc_rmhj7wx9pgjfkg_dvx3r0000gn/T/`
- version_baseline: `raw/aimami/1.2.3/macos-arm64/VERSION-BASELINE.md`
- evidence_excludes: `raw/aimami/1.2.3/macos-arm64/evidence-excludes.txt`

## Commands

- `tauri-dumper --input "raw/aimami/1.2.3/macos-arm64/frontend/AiMaMi.arm64.thin" --output "raw/aimami/1.2.3/macos-arm64/dumped"`
- `python3 "" --frontend "raw/aimami/1.2.3/macos-arm64/dumped" --out "raw/aimami/1.2.3/macos-arm64/frontend" --prefer-recovered-source`
- `node "" "raw/aimami/1.2.3/macos-arm64/dumped" "raw/aimami/1.2.3/macos-arm64/frontend/ast-facts.json" "raw/aimami/1.2.3/macos-arm64/frontend/frontend-control-flow.jsonl"`

## Tool Versions

- tauri-dumper: `tauri-dumper 0.1.5`
- python3: `Python 3.13.5`
- node: `v24.4.1`
- rustfilt: `rust_demangle 0.2.1`
- rizin: `rizin 0.8.2 @ darwin-arm-64, package: 0.8.2 (Homebrew)`
- retdec-decompiler: `missing`

## Key Outputs

- status: `raw/aimami/1.2.3/macos-arm64/frontend-tool-status.txt`
- dumped_assets: `raw/aimami/1.2.3/macos-arm64/dumped`
- frontend_contracts: `raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md`
- ast_facts: `raw/aimami/1.2.3/macos-arm64/frontend/ast-facts.json`
- frontend_control_flow: `raw/aimami/1.2.3/macos-arm64/frontend/frontend-control-flow.jsonl`
- page_backend_template: `raw/aimami/1.2.3/macos-arm64/frontend-page-ipc-rust-report.md`
- frontend_asset_hashes: `raw/aimami/1.2.3/macos-arm64/frontend-assets.sha256`
- evidence_excludes: `raw/aimami/1.2.3/macos-arm64/evidence-excludes.txt`
