# Evidence: codex_bundled_cli_path

- **Function**: `codexmate_lib::platform::process::codex_bundled_cli_path`
- **Owner EA**: 0x10027bee0
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/codex_bundled_cli_path_0x10027bee0.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (4 unique):
  - `codex_app_bundle_path`
  - `Path::_join`
  - `Path::is_file`
  - `__rust_dealloc`
- **Call-tree edges**: 5
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "()", "output": "Result<PathBuf, ()>"}

## Summary

Resolves bundled Codex CLI path: gets app bundle path, joins with 'Contents/Resources/codex' subpath (3 nested Path::_join calls), checks if result is a file. Returns PathBuf if exists, Err(()) otherwise.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
