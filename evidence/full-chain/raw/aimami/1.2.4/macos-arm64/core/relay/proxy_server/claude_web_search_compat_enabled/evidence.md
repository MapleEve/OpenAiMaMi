# Evidence: claude_web_search_compat_enabled

- **Function**: `codexmate_lib::core::relay::proxy_server::claude_web_search_compat_enabled`
- **Owner EA**: 0x10083a880
- **Version**: 1.2.4 (NEW-delta, not in 1.2.3)
- **Platform**: macOS arm64
- **Session**: mac_delta_124_20260809
- **Date**: 2026-08-09
- **Source**: SMB .c pseudocode (no live IDA, mac IDA on 1.2.6)

## Confirmed

- **Pseudocode source**: 1.2.4 mac SMB .c file at `ida/pseudocode/claude_web_search_compat_enabled_0x10083a880.c`
- **Decompilation completeness**: FULL (no truncation markers, RL20 check passed)
- **Callees extracted from .c text** (5 unique):
  - `OnceBox::initialize`
  - `Mutex::lock`
  - `Mutex::unlock`
  - `panic_count::GLOBAL_PANIC_COUNT`
  - `panic_count::is_zero_slow_path`
- **Call-tree edges**: 6
- **Terminated reason**: `response_serialize`
- **Interface type**: internal_function
- **DTO fields**: {"input": "&ProxyServerState", "output": "bool (enabled flag)"}

## Summary

Thread-safe getter: acquires mutex lock on ProxyServerState, reads claude_web_search_compat enabled flag from offset +350, returns bool. Used by proxy server request handler to check if web search compat mode is active.

## Inferred

- Call-tree and callee set extracted from .c text analysis (not IDA `callees` MCP call)
- Owner EA from delta-commands.txt symbol name → .c filename address match
- Interface report derived from .c pseudocode parameter analysis + frontend ipc-contracts.jsonl

## Unknown

- Exact Rust source line numbers not available (binary-only analysis)
- Async poll body (if any) not separately decompiled — .c is the sync entry point
- Runtime acceptance mapping (dim6) not tested — requires live App verification
