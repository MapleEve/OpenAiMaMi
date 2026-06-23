# mystery_unlock — win 1.1.1 backend-only orphan (orchestrator-verified)

**session**: <审计会话>
**verdict**: removed_direct_cmd
**owner_va**: None
**size_bytes**: 0 (1.0.9: 0)
**gate_tier**: removed

## Confirmed (orchestrator direct 逆向分析)
win 1.1.1: direct command 'mystery_unlock' string ABSENT from string pool (orchestrator find_regex 0 hits). Frontend-replacement commands get_mystery_unlock_grants (string 0x1412ac39a) + merge_mystery_unlock_grants (0x1412ac3b3) PRESENT. Conclusion: direct mystery_unlock command removed in 1.1.1; grants-based replacement retained. Consistent with 1.0.9 note (frontend used grants substitute).

## strings
- (absent)
