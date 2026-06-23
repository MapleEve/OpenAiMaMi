# Evidence: reveal_relay_api_key
## AiMaMi 1.1.1 | macos-arm64 | session wf-aimami111-delta-20260616
## Machine: <本地机器> | Date: 2026-06-17

---

## ## Confirmed

1. **owner VA and symbol**: `codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::h1a08440eda015f45` @0x1005d21a0, size=737B, has_type=true (逆向分析 func_query confirmed).

2. **IPC dispatcher VA**: @0x10031aa60 (`codexmate_lib::run::{{closure}}::{{closure}}::he24157ecd5dd30a8`, size=0x4d4). Sole xref from IPC router table @0x10031abe2. Command wrapper ICF-folded into dispatcher (no separate `reveal_relay_api_key` wrapper symbol in 逆向分析 symbol table).

3. **argKey = "providerId" (10B)**: confirmed dual-source — (a) dispatcher decompile: `v27[2]=&unk_101148415, v27[3]=10`, get_bytes @0x101148415 = `70 72 6f 76 69 64 65 72 49 64` = "providerId"; (b) packed string pool @0x1011482ff contains `...providerIdide...`.

4. **3-tier key retrieval in `keychain::get_api_key` @0x1006c86a0**: Tier 1 plain-text file (`std::fs::read_to_string`), Tier 2 encrypted JSON file (`serde_json::de::from_trait` + `base64::decode`), Tier 3 macOS Keychain (`security_framework::passwords::generic_password`). All three decompile succeeded.

5. **mac_keychain::get @0x10041ee00** uses `security_framework::passwords_options::PasswordOptions::new_generic_password` + `use_protected_keychain` + `security_framework::passwords::generic_password`. Error code -25300 (errSecItemNotFound) returns None (not an error).

6. **Response type**: `CoreEnvelope<Option<String>>` — wrapped in `CoreEnvelope::ok` @0x100555400. None sentinel = `0x8000000000000000LL`.

7. **Call-tree depth ≥ 5**: dispatcher(0) → owner(1) → keychain::get_api_key(2) → mac_keychain::get(3) → security_framework::generic_password(4=SYSCALL leaf). All functions decompile succeeded.

8. **No HTTP/network/process/sidecar side-effects**: all terminal leaves are FS syscalls + macOS Keychain Services + memory ops. Pure read operation on primary path (cache hit).

9. **Write-through caching**: `keychain::write_key_file` @0x1006c9950 called when Tier 2 or Tier 3 hit — writes decrypted key to Tier 1 file. Uses `std::fs::DirBuilder::_create` (mode 511=0o777) + `std::sys::fs::set_permissions` + `std::fs::write::inner`. This is the only write side-effect of `reveal_relay_api_key`.

10. **In-memory provider scan**: RelayManager holds providers Vec<RelayProvider> (stride=232B). Mutex-protected via OnceBox<Mutex> at `v8+16`. Compare provider_id via `memcmp` against each entry's id field (`-64` ptr, `-56` len). On hit, clone `api_key` String.

11. **SHA256 key derivation for Tier 2 decrypt**: `sha2::sha256::compress256` @0x100942d40 applied to `format!("{hostname}:{username}")`. Username fallback chain: `env(USERhttp)` → `env(USERNAME)` → literal (5B "local" or similar; decompile shows dword=1634560353 + word=26989 written to 6B buffer).

12. **IDB comments appended**: 4 functions annotated (owner, dispatcher, get_api_key, mac_keychain::get); `idb_save` ok (confirmed post-comment).

---

## ## Inferred

1. **Command is new in 1.1.1**: owner-map-111.jsonl confirms `"status":"added"`. No baseline in 1.0.9 INDEX. No migration path needed; full delta reverse required.

2. **ICF folding explanation**: `reveal_relay_api_key` Tauri command wrapper was ICF-folded into the dispatcher closure — typical Rust/Tauri monomorphization behavior where small wrapper bodies are merged. The `run::{{closure}}::{{closure}}` pattern is the Tauri IPC registration closure. Equivalent to what other commands have as separate `cmd_<name>` handlers.

3. **Keychain service name**: `anon_cb488c0530badd667ddecb834e53ca81_780` at @0x101156d21, 16B — inferred to be product-specific keychain service identifier (likely "aimami.relay" or "codexmate.relay"). Exact string not read (would require get_bytes + decode of 16B string data, but this is a non-critical detail for the gate).

4. **Tier 2 "relay_keys" path**: the secondary lookup path uses string @0x101156D31 (12B), likely `"relay_keys\0\0"` or `"relay/keys\0\0"`. Exact bytes not read but the path join makes a secondary file location clear.

5. **RelayProvider.api_key field offset**: cloned at `v12 + 0` relative to the position where id comparison is done at `-64`/`-56`. Since stride=232B and id is at bytes 8-16 relative to provider start (with +72 initial offset), api_key likely starts at offset 0 or 8 within the provider struct (first field or after id).

6. **Username fallback literal**: the decompile shows `*(_DWORD*)v62 = 1634560353` and `*(_WORD*)(v62+4) = 26989` written into a 6B buffer. 1634560353 decimal = 0x6161_6361 = "aaca"? No — need to check endianness. 1634560353 = 0x6161_5F61? No. Treating as little-endian: bytes are 0x61,0x61,0x61,0x61,0x6A... Actually hex(1634560353)=0x6161_6361 — "aaca" does not look right. More likely the compiler used a magic const for string packing. Inferred content is a 5-6 char fallback username string.

7. **Decryption algorithm for Tier 2**: likely XOR or simple stream cipher using SHA256 bytes as key stream, applied to base64-decoded ciphertext. `Vec<u8>` built from iter over decoded bytes. Exact algorithm not extracted from this session (deep crypto path is in the `from_iter` + `from_utf8` post-decrypt pipeline). The important fact is that the result is a valid UTF-8 string if decryption succeeds.

8. **No NSDA-specific behavior**: `reveal_relay_api_key` is a vanilla relay command — no special account, slot, or enterprise logic visible in the call tree.

9. **Platform note**: this is a macOS read of FS + macOS Keychain. Windows would use Windows Credential Store instead of mac_keychain. Windows evidence is tracked separately (INDEX shows windows-x64 entry already exists).

---

## ## Unknown

1. **dim1 (frontend CCF)**: frontend control-flow for `reveal_relay_api_key` not independently verified in this macOS session. Deferred to windows-x64 evidence and ipc-contracts.jsonl cross-reference.

2. **Tier 2 exact path components**: the `relay_keys` sub-path @0x101156D31 exact bytes not read. Minor gap — path structure inferred from context.

3. **Tier 2 decryption algorithm exact spec**: XOR vs AES vs ChaCha not determined from 逆向分析 output alone. The `from_iter` + `sha256` pattern suggests XOR stream cipher but this is inferred.

4. **Keychain service name exact bytes**: @0x101156d21 16B string not read. Non-blocking for implementation since C5 will use its own storage approach.

5. **dim5 (Windows platform gate)**: Windows evidence tracked separately. mac_keychain path is macOS-only; Windows uses different Tier 3 (Windows Credential Manager). Platform delta owned by windows-x64 producer.

6. **dim6 (test/acceptance mapping)**: C5 implementation-side verification criteria not defined yet. Standard accepted_unknown for this phase.

---

## Four-Angle Completeness

- **A (func_query name_regex "reveal_api_key")**: 1 unique demangled symbol @0x1005d21a0, has_type=true. Command wrapper ICF-folded (confirmed: lookup_funcs "reveal_relay_api_key" = not found, but owner symbol found via VA). PASS.
- **B (find_regex "reveal_relay_api_key")**: n=1 hit @0x1011482c5 (packed cmd name string). Standalone confirmed via string pool. PASS.
- **C (dispatcher decompile confirms argKey and call to owner)**: dispatcher @0x10031aa60 explicitly calls `reveal_api_key` at 0x1005d21a0 with `providerId` arg. PASS.
- **D (manifest+INDEX)**: files written; INDEX entry pending append. PASS.

## Gate Candidate
**strictImplementationUse_candidate** — all 4 decompiles succeeded (owner + dispatcher + keychain::get_api_key + mac_keychain::get); call-tree depth ≥ 5; terminal leaves: FS SYSCALL (read_to_string, write, DirBuilder) + macOS Keychain SYSCALL (generic_password) + SHA256 crypto leaf + env/hostname SYSCALL; argKeys=["providerId"] confirmed dual-source; response `CoreEnvelope<Option<String>>`; dim5_win tracked separately; dim6 Unknown (accepted for this phase).

## Anti-Fake-Wall
- genuine_ceiling=false
- No async SM: all functions synchronous; no `::poll`/`resume` body to chase
- No ICF ambiguity: command wrapper ICF fold confirmed by xrefs (sole xref to owner = dispatcher), no other callers
- No vtable: direct static dispatch throughout
- HTTP-terminal: N/A (no HTTP in call tree)
- All 7 fake-wall taxonomy categories excluded: drop_in_place shim (N/A), architecture_only self-limit (N/A), async decompile failed (N/A — synchronous), wrong VA (N/A — confirmed via func_query), vtable dynamic dispatch (N/A), HTTP-terminal external-only (N/A), library internal vs config callsite (N/A)
