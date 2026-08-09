# Reverse Evidence Manifest

- archive_path: `<内部存储>/raw/aimami/1.2.4/macos-arm64`
- binary: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/AiMaMi.arm64.thin`
- binary_sha256: `24bf0857f7afa0c2352cb5ca1552136c406ed9894609dc2de6152437faf9c288`
- app_bundle: `<内部存储>/raw/binary/AiMaMi 1.2.4.app`
- feature: `unknown`
- frontend_root: `<内部存储>/raw/aimami/1.2.4/macos-arm64/dumped`
- created_at: `2026-07-29T02:21:35Z`
- tmp_scratch: `/var/folders/2x/3sc_rmhj7wx9pgjfkg_dvx3r0000gn/T/`
- version_baseline: `<内部存储>/raw/aimami/1.2.4/macos-arm64/VERSION-BASELINE.md`
- evidence_excludes: `<内部存储>/raw/aimami/1.2.4/macos-arm64/evidence-excludes.txt`

## Commands

- `tauri-dumper --input "<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/AiMaMi.arm64.thin" --output "<内部存储>/raw/aimami/1.2.4/macos-arm64/dumped"`
- `python3 "<本地路径>/.claude/skills/rust-reverse-pipeline/scripts/extract_frontend_contracts.py" --frontend "<内部存储>/raw/aimami/1.2.4/macos-arm64/dumped" --out "<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend" --prefer-recovered-source`
- `node "<本地路径>/.claude/skills/rust-reverse-pipeline/scripts/extract_frontend_ast.mjs" "<内部存储>/raw/aimami/1.2.4/macos-arm64/dumped" "<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/ast-facts.json" "<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/frontend-control-flow.jsonl"`

## Tool Versions

- tauri-dumper: `tauri-dumper 0.1.5`
- python3: `Python 3.13.5`
- node: `v24.4.1`
- rustfilt: `rust_demangle 0.2.1`
- rizin: `rizin 0.8.2 @ darwin-arm-64, package: 0.8.2 (Homebrew)`
- retdec-decompiler: `missing`

## Key Outputs

- status: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend-tool-status.txt`
- dumped_assets: `<内部存储>/raw/aimami/1.2.4/macos-arm64/dumped`
- frontend_contracts: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/frontend-contract-report.md`
- ast_facts: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/ast-facts.json`
- frontend_control_flow: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend/frontend-control-flow.jsonl`
- page_backend_template: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend-page-ipc-rust-report.md`
- frontend_asset_hashes: `<内部存储>/raw/aimami/1.2.4/macos-arm64/frontend-assets.sha256`
- evidence_excludes: `<内部存储>/raw/aimami/1.2.4/macos-arm64/evidence-excludes.txt`
