# data_store_identifiers — win 1.1.1 backend-only orphan (orchestrator-verified)

**session**: wf-aimami111-backend-orphan-materialize-20260622-orchestrator-verified
**verdict**: present_same
**owner_va**: 0x14094D300
**size_bytes**: 1968 (1.0.9: 1968)
**gate_tier**: strictImplementationUse

## Confirmed (orchestrator direct 逆向分析)
win 1.1.1 PRESENT, orchestrator-verified. string 'fetch_data_store_identifiers'@0x1412fdde4 → data xref @0x14094d3bc → owner sub_14094D300 size 0x7b0=1968B = EXACT 1.0.9 match. async vtable registration (not main dispatcher case). backend-only.

## strings
- fetch_data_store_identifiers
