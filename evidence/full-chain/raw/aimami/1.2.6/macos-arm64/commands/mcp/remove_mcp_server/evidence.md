# Evidence: remove_mcp_server (commands::mcp duplicate leaf)

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: commands/mcp (duplicate of canonical core/mcp leaf)
- function: codexmate_lib::core::mcp::remove_mcp_server
- owner_ea: 0x1009f31d0
- function_size: 0xcee
- session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
- source: ida decompile (mac 1.2.6 IDB, <反编译器>_ready=true)
- canonical_leaf: <内部存储>/raw/aimami/1.2.6/macos-arm64/core/mcp/remove_mcp_server/

## Confirmed
- This leaf is a DUPLICATE of the canonical core/mcp/remove_mcp_server leaf
- The delta-commands.txt lists the function as codexmate_lib::core::mcp::remove_mcp_server (module=codexmate_lib::core::mcp)
- The canonical pseudocode, call-tree.json, and interface-report.json are in the core/mcp/ leaf
- IDA shows two remove_mcp_server functions: commands::mcp (0x1007cbfc0, wrapper) and core::mcp (0x1009f31d0, implementation)
- The core::mcp function at 0x1009f31d0 is the implementation owner (3310 bytes, contains the actual MCP document parsing + atomic write logic)

## Inferred
- The commands::mcp function at 0x1007cbfc0 is a thin Tauri command wrapper that delegates to core::mcp
- The canonical reverse engineering evidence is in the core/mcp leaf

## Unknown
- N/A (see canonical leaf for full analysis)

## Canonical Reference
See: core/mcp/remove_mcp_server/evidence.md for the full implementation analysis
See: core/mcp/remove_mcp_server/ida/pseudocode/0001_remove_mcp_server_owner.c for real IDA pseudocode (17603 bytes, 617 code lines)
