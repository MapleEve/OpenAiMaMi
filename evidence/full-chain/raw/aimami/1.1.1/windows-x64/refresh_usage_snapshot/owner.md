# refresh_usage_snapshot — Owner (Windows x64)
# session: <审计会话> | machine: <本地机器>
# sha: d24e429a | delta_class: integrity_recovered | baseline: 1.0.9
# not gate promotion

## Identity

| field            | value |
|------------------|-------|
| command          | refresh_usage_snapshot |
| platform         | windows-x64 |
| owner name       | refresh_usage_snapshot_owner_sys |
| owner VA         | 0x140984C40 |
| owner IDB name   | refresh_usage_snapshot_owner_sys (renamed this session) |
| size             | 0xF9E (4062 bytes) |
| basic_blocks     | 123 |
| decompile_status | FAILED_hex_rays — async/coroutine ICF complexity; body reconstructed via callees + basic_block CFG + string xrefs |
| delta_class      | integrity_recovered |

## Delta vs 1.0.9

1.0.9 handler: async coroutine sub_1408CDB20 (size 0xFE7, 4-state outer+inner+HTTP sub-states).

1.1.1 changes:
- Handler relocated to refresh_usage_snapshot_owner_sys@0x140984C40 (size 0xF9E)
- NEW pre-check: confirm_pending_auto_switch_deserialize_request_sys@0x140089a50 — checks pending auto-switch state before executing HTTP refresh; early-return path absent in 1.0.9
- NEW callee set: sub_140921810, sub_140797840, sub_14023F380, sub_1410A1DF0, sub_140E30410, sub_14091A6D0, broadcast_runtime_state_updated_111@0x140790230
- DROPPED: sub_140889870 (1.0.9 active-account refresh body — absent from 1.1.1 callee set; routing restructured)
- NEW core function: refresh_usage_snapshot_core_111@0x1401BD570 encapsulates account loop + HTTP + quota history
- NEW HTTP executor: fetch_wham_usage_http_111@0x140673CC0 (wham/usage endpoint, absent in 1.0.9)
- NEW quota history persist+dedup: quota_history_persist_file_111@0x140200EA0 + quota_history_append_dedup_111@0x1401FF820
- NEW stats serializer: serialize_usage_attempt_stats_111@0x14020DF30 (4 new fields: usageAttemptCount, usageSuccessCount, lastUsageFailure, lastUsageFailureAccount)

## Reconstruction Method

HexRays decompile failed (function too large/complex for single-pass ICF). Reconstruction:
1. callees() — full callee list captured at sweep session <审计会话>
2. basic_blocks() — 123 blocks, branching patterns identified
3. string xrefs — "refresh_usage_snapshot" string xref confirms command dispatch string at 0x1412fa968
4. Named callees decompiled individually this gold-leaf session (<审计会话>)

## Produced-by

Sweep: <审计会话> (initial delta + callee capture)
Gold-leaf: <审计会话> (decompile of callees, body expansion, dim1-5 closure, idb writes)
