# Evidence: cleanup_for_native_off_REMOVED

## Metadata
- product: aimami
- version: 1.2.6
- platform: macos-arm64
- module: core/relay/router_unlock_auth
- function: codexmate_lib::core::relay::router_unlock_auth::cleanup_for_native_off
- status: REMOVED (1.2.4→1.2.6)
- session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
- verification: IDA func_query name_regex "cleanup_for_native_off" on 1.2.6 mac IDB returned no matching function

## Confirmed
- Function NOT found in 1.2.6 mac IDB via func_query (name_regex="cleanup_for_native_off" on live IDB 2026-08-09)
- Searched for renamed successors: "cleanup_native", "cleanup_off", "router_unlock_cleanup" — none found
- The router_unlock_auth module still exists in 1.2.6 but cleanup_for_native_off function is absent
- Frontend IPC contract for this function is absent from 1.2.6 frontend bundle

## Inferred
- The cleanup_for_native_off function was part of the router unlock/cleanup path for native-off mode
- Its removal suggests the native-off cleanup logic was refactored or moved into a different function
- The router_unlock_auth module may have been simplified in 1.2.6

## Unknown
- TRULY REMOVED: No function matching cleanup_for_native_off found in 1.2.6 IDB. No renamed successor detected.
- Whether the cleanup logic was inlined into another function or removed entirely is unknown without deeper analysis.

## Successor Analysis
TRULY REMOVED: No function matching cleanup_for_native_off found in 1.2.6 IDB (func_query returned empty). No renamed successor detected. The function was removed without a direct replacement.
