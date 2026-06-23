# load_sessions — Owner Map (Windows x64)
**session**: <审计会话>
**machine**: <本地机器>
**date**: 2026-06-18

## Owner VAs

| symbol | va | size | role |
|--------|----|------|------|
| `load_sessions_handler_111` | `0x140992490` | 0x27A1 | IPC command handler (primary owner) |
| `load_sessions_core_111` | `0x14016cd50` | 0x3747 | session enumeration + DTO builder |
| `load_session_analytics_impl_111` | `0x140026bd0` | - | analytics sub-path |
| `codex_home_paths_serialize_111` | `0x1402129d0` | 0x272 | serde serializer for CodexHomePaths |
| `pending_auto_switch_state_lock_acquire_111` | `0x14006edc0` | - | spinlock gate (NEW) |
| `query_installed_skills_with_repo_111` | `0x141214620` | - | skill store pre-flight gate (NEW) |
| `skill_store_get_all_111` | `0x14106d960` | - | thunk → skill_store_iter_111 (NEW) |
| `skill_store_iter_111` | `0x14106de20` | - | vtable-dispatched skill iterator (NEW) |
| `remove_skill_parse_id_param_111` | `0x1402fed40` | - | range Option param decoder (NEW) |
| `codex_home_paths_field_tag_fast_111` | `0x14021f9a0` | - | serde field discriminant (fast path) |
| `codex_home_paths_field_tag_slow_111` | `0x14021f4e0` | - | serde field discriminant (slow path) |

## Relay Dispatch Chain
```
sub_140A65470 (primary)  @ 0x140a65470  → load_sessions_handler_111
sub_140A9E990 (secondary) @ 0x140a9e990  → load_sessions_handler_111
```
Both dispatchers call `sub_140EFCB10` (stage check) before invoking handler.

## Key Strings
| string | va | usage |
|--------|----|-------|
| `"load_sessions"` | 0x1412fa930 | command registration |
| `"repo"` | 0x1412fa93d | handler arg key |
| `"load_session_analytics"` | 0x1412ac411 | analytics sub-path name |
| `"repo"` | 0x1412ac6d1 | analytics arg key |
| `"range"` | 0x1412ac71b | analytics range arg key |
| `"autoSwitchLogPath"` | 0x1412c0bfc | DTO field serde key (NEW in 1.1.1) |

## Delta Classification
- **delta_class**: integrity_recovered (NEW command in 1.1.1, absent in 1.0.9 windows)
- **Baseline 1.0.9**: no `load_sessions` command in windows binary at all
- **New callees**: 5 (pending_auto_switch lock, skill gate, skill_store_get_all, skill_store_iter, analytics impl)
- **DTO change**: CodexHomePaths +1 field (autoSwitchLogPath, offset +144, serde discriminant 6)
- **New side effects**: spinlock acquisition, full skill store iteration, analytics sub-path
