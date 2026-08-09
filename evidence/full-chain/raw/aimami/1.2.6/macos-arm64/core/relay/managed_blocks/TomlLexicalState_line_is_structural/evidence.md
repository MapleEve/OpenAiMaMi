# Evidence: TomlLexicalState_line_is_structural

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/managed_blocks
- function: codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural
- owner_ea: 0x1007c0a00
- function_size: 0x1d5 (469 bytes)
- session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
- source: ida decompile (mac 1.2.6 IDB, <反编译器>_ready=true)
- idb: AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64
- binary_sha256: 1.2.6-mac-arm64

## Confirmed
- Owner function located via IDA func_query on live 1.2.6 mac IDB (2026-08-09): __ZN13codexmate_lib4core5relay14managed_blocks16TomlLexicalState18line_is_structural17h8bbafe1f19cb1f18E at 0x1007c0a00
- Full pseudocode decompiled successfully via ida_<反编译器>.decompile() (2519 bytes, no truncation)
- Pure function: 0 callees, no side effects, 39 basic blocks
- 19 callers across router config parse and codex_writer modules
- State encoding: 0=double-quote string, 1=single-quote string, 2=structural/default
- Recognizes triple-quote boundaries (""" and ''') for multi-line string state transitions
- Backslash escape handling (jumps 2 bytes), # enters comment until end of line
- Used by managed_blocks to safely locate insertion/replacement boundaries in config.toml

## Inferred
- This function is a pure predicate that scans a single line of TOML content and determines if the lexical state after processing returns to "structural" (not inside a string or comment)
- It enables the managed_blocks feature to avoid inserting managed block markers inside multi-line strings
- The function is called from RouterConfigSurface::parse, codex_writer::compose_from_original, strip_all_managed_blocks, and other config manipulation functions

## Unknown
- Deep call-tree beyond direct callees not traced (terminated_reason: terminal_leaf_predicate — pure function with no callees)
- Runtime behavior under edge cases (e.g., malformed triple-quote sequences) would need runtime verification

## Callees (deduped)
[] (pure function, no callees)

## Callers (19 total, key callers)
- RouterConfigSurface::parse (0x100817180)
- codex_writer::compose_from_original (0x10081bfb0)
- codex_writer::router_entry_presence (0x10081eb30)
- codex_writer::strip_all_managed_blocks (0x10081fa90)
- codex_writer::top_level_assignment_lines (0x100822780)
- config_takeover::split_foreign_surface (0x100ae4790)
- config_takeover::restore (0x100aea860)
- codex_diagnostic::find_foreign_providers (0x100af3f90)
- codex_diagnostic::collect_defined_profiles (0x100af9de0)
