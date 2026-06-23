# get_relay_provider_quota — WIN 1.1.1 Owner

## Owner Function

| field | value |
|---|---|
| command | `get_relay_provider_quota` |
| version | AiMaMi 1.1.1 win64 |
| platform | windows-x64 |
| binary | AiMaMi 1.1.1 win64.exe |
| binary_sha256 | d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610 |
| idb | <本地路径>|
| ida_server | <逆向工具通道> (<内部网络>) |
| owner_va | 0x14093DEB0 |
| owner_name | get_relay_provider_quota_coroutine_sys |
| owner_size | 4746 B (0x128a) |
| namespace | manager (inferred from param label "manager") |
| session | <审计会话> |
| machine | <本地机器> |
| produced_at | 2026-06-16 |

## String Locator

- String `"get_relay_provider_quota"` @ `0x1412fa981`
- Single xref @ `0x14093df79` in `get_relay_provider_quota_coroutine_sys@0x14093DEB0`
- Param labels in decompile:
  - `aGetRelayProvid` @ `0x1412fa981` = `"get_relay_provider_quota"` (24B)
  - `aManager_0` @ `0x1412fa999` = `"manager"` (7B)
  - `aProviderid_2` @ `0x1412fa9a0` = `"providerId"` (10B)

## Callers (xrefs to owner)

| from_addr | from_fn | from_fn_size |
|---|---|---|
| 0x140a70d3f | sub_140A70C90 | 0x235 |
| 0x140a7a6bf | sub_140A7A610 | 0x235 |
| 0x1416d25e4 | (data) | - |
| 0x141912d74 | (data) | - |

The two code callers are registration/dispatch wrappers (size 0x235 = 565B, identical, typical Tauri command poll-dispatch pattern).

## Coroutine Structure

Multi-phase async coroutine. State machine fields (all on `a1` frame):
- `a1+11024` — outer phase (0/1/2/3)
- `a1+11025` — sub-phase byte
- `a1+11008` — param-parse state
- `a1+10992` — inner-body state
- `a1+10984` — date-header sub-state

Phase 0 / case 0: param extraction from IPC args
Phase 0 / case 0 → inner: relay state lock + quota Vec scan
Phase 0 / case 0 → LABEL_14+: HTTP builder / keychain / response serialize
