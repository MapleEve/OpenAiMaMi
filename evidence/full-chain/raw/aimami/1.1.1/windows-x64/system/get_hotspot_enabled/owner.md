# get_hotspot_enabled — Windows x64 1.1.1 Owner Evidence

**session**: wf-aimami111-delta-20260616
**machine**: <本地机器>
**binary_sha256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**platform**: windows-x64
**module**: system
**command**: get_hotspot_enabled
**produced_at**: 2026-06-17
**source**: ida-pro-win-mcp (<逆向工具通道>, server <内部网络>)
**idb**: <本地路径>

---

## String Locator

- `"get_hotspot_enabled"` @ `0x1412ac46c` (n=1, find_regex exact match)
- xref: `0x1400215f0` inside `get_hotspot_enabled_owner_sys_111` @ `0x140021570`
- xref type: data — A-level binding (direct string reference in owner function)

## Owner Function

| field | value |
|---|---|
| VA | `0x140021570` |
| size | 0x36F (879 bytes) |
| IDB name | `get_hotspot_enabled_owner_sys_111` |
| namespace | `repo` (string "repo" @ `0x1412ac6d1`) |
| command string | `"get_hotspot_enabled"` @ `0x1412ac46c` (19 chars) |
| arg deserialize | `sub_141214620` (no args expected) |
| core read delegate | `get_hotspot_config_core_read_sys_111` @ `0x14060CBC0` |
| IPC resolve | `sub_14082F2D0` |

## Callers (xrefs_to owner)

Owner is a tauri command handler — called via tauri IPC main dispatcher (string-length switch table), not directly. String xref confirms dispatch registration.

## IDB Write-back

- rename: `sub_140021570` → `get_hotspot_enabled_owner_sys_111` ✓
- comment @ `0x140021570`: evidence row written ✓
- idb_save: ok (<本地路径>

## Delta vs 1.0.9

| field | 1.0.9 win | 1.1.1 win |
|---|---|---|
| owner VA | 0x140285050 | 0x140021570 |
| owner size | 0x36F (879B) | 0x36F (879B) |
| namespace | repo | repo |
| argKeys | [] | [] |
| command string VA | 0x141268fa7 | 0x1412ac46c |
| core_read VA | 0x1401631A0 | 0x14060CBC0 |
| mutex pattern | _InterlockedCompareExchange8 + WakeByAddressSingle | same |
| settings key | "hotspot" | "hotspot" (0x1412B6E51, 7B) |
| behavioral semantics | bool read, read-only | same |

VA drift only — behavior identical.
