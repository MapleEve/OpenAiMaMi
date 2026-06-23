# check_update_installability — Interface / DTO / Error / Side-effect

## Command Registration
- **IPC command string**: `check_update_installability`
- **Rodata confirmed**: false (no string literal in 1.1.1 binary rodata — same as 1.0.9)
- **Dispatcher**: `codexmate_lib::run::{{closure}}::{{closure}}::h7cfd9a18cc906f52` @ `0x100313ef0` (single caller)
- **Platform module**: `codexmate_lib::platform::update`

## Input (argKeys)
- **argKeys**: `[]` — zero-arity command, no IPC parameters
- **Frontend wrapper**: see 1.0.9 CCF evidence (unchanged per delta classification)

## Output Response Struct (75 bytes at return pointer a1)

| Offset | Type | Field | Semantics |
|---|---|---|---|
| +0..+8 | usize | status_tag.len | byte length of status tag string |
| +8..+16 | *u8 | status_tag.ptr | heap pointer to status tag bytes |
| +16..+24 | usize | status_tag.cap | allocated capacity |
| +24..+32 | usize | exe_path.len_or_sentinel | `0x8000000000000000` = None |
| +32..+40 | *u8 | exe_path.ptr | exe parent dir path (when Some) |
| +40..+48 | usize | exe_path.cap | |
| +48..+56 | usize | app_path.len_or_sentinel | `0x8000000000000000` = None |
| +56..+64 | *u8 | app_path.ptr | candidate .app install path (when Some) |
| +64..+72 | usize | app_path.cap | |
| +72 | bool | can_install | `!(is_translocation \| is_volumes_read_only)` |
| +73 | bool | is_translocation | path contains `/AppTranslocation/` |
| +74 | bool | quarantine_cleared | `xattr exit_code == 0` (quarantine IS present, NOT cleared) |

## Status Tag Values
| Tag | Condition | String bytes (@ rodata) |
|---|---|---|
| `"ok"` | No translocation, no <来源位置>| anon_c7777ab3e3e082d25560615475f0500f.469 |
| `"read_only_location"` | `<macOS卷路径前缀>` prefix AND NOT translocation | 17 bytes @ `0x1011519FC` |
| `"app_translocation"` | is_translocation=true | 17 bytes @ `0x101151A0E` |

## String Constants (1.1.1 ARM64)
| Address | Content | Length | Purpose |
|---|---|---|---|
| `0x1011519EA` | `/AppTranslocation/` | 18 | needle for is_contained_in |
| `0x1011519FC` | `read_only_location` | 17 | status tag value |
| `0x101151A0E` | `app_translocation` | 17 | status tag value |
| shared pool `0x101151971` | fused: `...xattr-pcom.apple.quarantine` | — | xattr cmd first arg (len=5: "xattr") |

## Translocation Detection
- Needle: `/AppTranslocation/` (18 bytes)
- Method: `alloc::string::String::from_utf8_lossy` + `is_contained_in` (inlined in 1.1.1; was separate helper `is_app_translocation_path` @ `0x100578020` in 1.0.9)
- Applied to: current exe path AND candidate app_path

## <来源位置>
- Prefix: `<macOS卷路径前缀>` (9 bytes)
- Method: XOR comparison — `*QWORD(path) ^ 0x73656D756C6F562FLL | BYTE(path+8) ^ 0x2F == 0`
- Applied to: current exe path string AND candidate app_path string

## xattr Probe
- **Command**: `xattr -p com.apple.quarantine <candidate_app_path>`
- **Semantics**: exit_code==0 → quarantine attribute present (`quarantine_cleared=true` despite name); nonzero → absent
- **Error handling**: I/O error → `quarantine_cleared=false`, no panic
- **Scope**: only executed when candidate app_path exists (v3 != 0x8000000000000000)

## Error Handling
| Error | Handling | Result |
|---|---|---|
| `current_exe()` Err | Silent fallback | status_tag="ok", all paths None, is_translocation=false, quarantine_cleared=false |
| Path parent walk → null | Skip .app candidate | app_path=None, skip xattr |
| `Command::output()` Err | quarantine_cleared=false | No panic, no error propagation |
| No CoreError envelope | All errors silently handled | No `Err(CoreError)` in response |

## Side Effects
1. **Read-only**: `xattr -p com.apple.quarantine <candidate_app_path>` subprocess — read-only probe
2. **No writes**: no config changes, no file writes, no network I/O

## Diff vs 1.0.9 Baseline
| Aspect | 1.0.9 | 1.1.1 | diff |
|---|---|---|---|
| Owner VA | `0x100578128` | `0x10055a520` | relocated (ASLR/recompile) |
| Owner size | 1596B (0x63c) | 2078B (0x81e) | +482B (inlining) |
| Separate helper | `is_app_translocation_path` @ `0x100578020` | Inlined in owner | refactor only |
| Behavior | identical | identical | migrated_no_behavior_diff |
| Constants | same | same | identical |
| Response struct | 75-byte layout | 75-byte layout | identical |
| argKeys | [] | [] | identical |

## Platform Scope
- **macOS arm64**: CONFIRMED (this document)
- **Windows x64**: Unknown — must not be inferred from macOS evidence
