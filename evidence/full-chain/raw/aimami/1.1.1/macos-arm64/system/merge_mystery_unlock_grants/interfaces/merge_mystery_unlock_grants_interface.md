# Interface / DTO / Error — merge_mystery_unlock_grants

## ArgKeys

| Key | Type | Required | Notes |
|-----|------|----------|-------|
| `grants` | `Vec<MysteryUnlockGrant>` | Yes | Incoming grants to merge into existing set |

**Frontend snippet**: `ne("merge_mystery_unlock_grants", {grants: t})` (col=31963, assets/index-DdcCOEJG.js:86)

## MysteryUnlockGrant struct

Each element in the grants Vec is 40 bytes stride (macos-arm64):
```
offset 0  (8B): discriminant / tag
offset 8  (8B): route_ptr (String pointer)
offset 16 (8B): route_len (String length)
offset 24 (8B): grant_id (u64)
offset 32 (8B): granted_at_ms (u64, unix epoch milliseconds)
```

**Fields**:
- `route: String` — the route to grant access to (must pass `mystery_route_allowed`)
- `grant_id: u64` — numeric identifier for the grant
- `granted_at_ms: u64` — timestamp when grant was created (caller-provided)

## Response

`CoreEnvelope<Vec<MysteryUnlockGrant>>`

Success discriminant = 0 (Ok):
- `a1+0`: 0 (Ok)
- `a1+8`: ptr to Vec<MysteryUnlockGrant>
- `a1+16`: Vec len
- `a1+24`: Vec cap

Error discriminant = 1 (Err):
- `a1+0`: 1 (Err)
- `a1+8..+32`: CoreError envelope (string ptr/len/cap fields)

**Note**: get_mystery_unlock_grants returns the same `CoreEnvelope<Vec<MysteryUnlockGrant>>` type
(confirmed from sibling command decompile @0x10061a140)

## Side Effects

1. **Load settings** from persistent config (`load_settings` @0x1004bfa30)
2. **Merge** incoming grants with existing grants using route allowlist filter
3. **Sort** merged set (insertion_sort if <21 elements, driftsort if >=21)
4. **Save settings** with updated grants (`save_settings` @0x1004c00c0)

## Route Allowlist (mystery_route_allowed @0x1004c7650)

Only grants with routes matching the following pass the filter (others are silently dropped):

| Route | Length |
|-------|--------|
| `"mcp"` | 3 |
| `"skills"` | 6 |
| `"overview"` | 8 |
| `"accounts"` | 8 |
| `"sessions"` | 8 |
| `"settings"` | 8 |
| `"maintenance"` | 11 |
| `"subscription"` | 12 |
| `"customInstructions"` | 18 |

Matching is case-sensitive after `str::trim_matches` (whitespace trim only).

## Error Paths

| Scenario | Behavior |
|----------|----------|
| `save_settings` fails | CoreError propagated via Err envelope |
| Mutex poisoned (prev panic) | Returns Err with "mutex was poisoned by a previous panic" message (41 chars) |
| Grant route not in allowlist | Grant silently dropped, not merged |
| `load_settings` fails | Would propagate via CoreError (error from settings load) |

## Mutex Pattern

The command function acquires the global Repository mutex:
- `OnceBox::initialize` (lazy init if not yet acquired)
- `Mutex::lock` (blocking)
- Repository operation
- `Mutex::unlock` (always, even on error/panic)
- Panic count tracked: if prev panic set poison bit, returns poisoned error

## Timestamp Semantics

`granted_at_ms` in the response Vec reflects the **caller-provided** value from incoming grants,
NOT the server-side `SystemTime::now()`. The `now_ms` timestamp computed in core is used
only internally (possibly for metadata or sorting tiebreak — exact use TBD but not in response fields).

## Notes

- `get_mystery_unlock_grants` is the sibling read-only command (no args, same response type)
- Both commands share `mystery_route_allowed` filter
- Sorted output: order is determined by stdlib sort comparator on `Vec<MysteryUnlockGrant>`
  (likely lexicographic on `route` string given it's the first struct field)
- Windows behavior: Unknown (separate Windows IDB required)
