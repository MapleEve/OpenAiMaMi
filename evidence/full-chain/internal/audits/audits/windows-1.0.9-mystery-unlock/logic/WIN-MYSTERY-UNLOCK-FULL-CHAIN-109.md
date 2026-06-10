# mystery_unlock — Windows x64 Full-Chain Evidence
# session: <audit-session> | machine: <workstation> | produced: 2026-06-10
# binary_sha12: a5822387fa3f | gate: strictImplementationUse (dim1-5 closed; dim6 pending)
# dim1 source: mami windows-x64 frontend ipc-contracts (closed_via_mami_frontend)

## Cluster Overview

2 IPC owner leaves:
- `get_mystery_unlock_grants` @ 0x14027E640 (0x37f bytes)
- `merge_mystery_unlock_grants` @ 0x1402719B0 (0x4b1 bytes)

Both confirmed: Windows IDA decompile, IDB already renamed (wf3-D1 session).

## Frontend dim1 Evidence (Windows IPC contracts)

Source: `evidence/full-chain/raw/aimami/1.0.9/windows-x64/frontend/tauri-dumped/frontend/ipc-contracts.jsonl`

```
get_mystery_unlock_grants:
  file: assets/index-CL22l5v8.js, line 86, col 31666
  command: get_mystery_unlock_grants
  snippet: getMysteryUnlockGrants:()=>G("get_mystery_unlock_grants")
  argKeys: [] (no arguments from frontend)

merge_mystery_unlock_grants:
  file: assets/index-CL22l5v8.js, line 86
  snippet: mergeMysteryUnlockGrants:t=>G("merge_mystery_unlock_grants",{grants:t})
  argKeys: ["grants"]
```

Both commands have frontend invoke wrappers confirmed in win ipc-contracts. dim1 = `closed_via_mami_frontend`.

Note: frontend passes `repo` param via the arg bundle (IPC framework resolves from InvokeRequest); `grants` is explicitly passed as `{grants:t}`.

## get_mystery_unlock_grants — Backend dim2-5

**VA**: 0x14027E640, size 0x37f, IDB name: `get_mystery_unlock_grants`

**IPC contract**:
- Command string: `"get_mystery_unlock_grants"` (25 chars) at IDB
- Parameter: `repo` (str)
- Returns: `Vec<MysteryUnlockGrant>` on Ok (discriminant==3)
- Error: discriminant==6

**Pseudocode** (annotated decompile):
```
sub_14027E640(Src):
  // IPC cmd get_mystery_unlock_grants | param: repo(str)
  memcpy(Dst, Src, sizeof(Dst))         // copy IPC arg bundle
  sub_1400DA7C0(Dst[64]+16)            // permission/auth check
  if !ok: return Err==6
  sub_1411CE640(v21, v14, v14[2])      // parse IPC invocation args
  if parse_ok:
    sub_1400A8B70(query_by_repo)        // query storage by repo
    if Ok:
      copy Vec<MysteryUnlockGrant> to result
      tauri_ipc_resolve_sys(discriminant==3, result)
    else:
      tauri_ipc_resolve_sys(discriminant==6)
  cleanup: 96B per entry loop (drop Vec elements)
```

**Callees** (12 total, depth ≥ 5):
- `0x1411ccb90`: memcpy
- `0x1400da7c0`: sub_1400DA7C0 (permission/auth check)
- `0x1411ce640`: sub_1411CE640 (IPC arg parse)
- `0x1400a8b70`: sub_1400A8B70 (query by repo — storage impl leaf)
- `0x14120829b`: sub_14120829B
- `0x140062230`: tauri_ipc_resolve_sys (IPC response)
- `0x1400ca020`: sub_1400CA020 (cleanup)
- `0x140298200`: sub_140298200
- Plus: nullsub_1, sub_140001360, sub_140001370, sub_14006A0F0

**dim4 DTO**:
- `MysteryUnlockGrant`: 96B stride (confirmed from cleanup loop: `96*v33` per entry)
- discriminant offset-0: 3=Ok(Vec<MysteryUnlockGrant>), 6=Err
- repo: str param from IPC arg bundle
- response envelope: standard tauri_ipc_resolve_sys pattern

## merge_mystery_unlock_grants — Backend dim2-5

**VA**: 0x1402719B0, size 0x4b1, IDB name: `merge_mystery_unlock_grants`

**IPC contract**:
- Command string: `"merge_mystery_unlock_grants"` in IDB
- Parameters: `repo` (str) + `grants` (Vec<MysteryUnlockGrant>)
- Returns: Ok (discriminant==3) with merged grant vec
- Error: discriminant==6

**Pseudocode** (annotated decompile):
```
sub_1402719B0(Src):
  // IPC cmd merge_mystery_unlock_grants | params: repo(str) + grants(Vec<MysteryUnlockGrant>)
  memcpy(Dst, Src, sizeof(Dst))
  sub_1400DA7C0(...)                    // permission check
  sub_1411CE640(parse_grants_from_ipc)  // parse Vec<MysteryUnlockGrant> from IPC
  sub_1400F0C60(merge_by_repo_key)      // merge grants by repo key
  sub_1400AA720(...)                    // finalize/persist
  tauri_ipc_resolve_sys(discriminant==3, merged_vec)
  // Err path: discriminant==6
  cleanup: 96B/entry loop
```

**Callees** (13 total, depth ≥ 5):
- `0x1411ccb90`: memcpy
- `0x1400da7c0`: sub_1400DA7C0 (permission check)
- `0x1411ce640`: sub_1411CE640 (parse IPC args + grants)
- `0x1400f0c60`: sub_1400F0C60 (merge grants by repo key — impl leaf)
- `0x1400aa720`: sub_1400AA720 (persist/finalize)
- `0x140062230`: tauri_ipc_resolve_sys
- `0x1400ca020`: sub_1400CA020 (cleanup)
- Plus standard IPC teardown fns

**dim4 DTO**:
- Input `grants`: Vec<MysteryUnlockGrant> (96B/entry stride)
- Merge semantics: by repo key via sub_1400F0C60 (no duplicate repos)
- Side-effect: persistent storage write (merge operation)
- Ok==3/Err==6 discriminants confirmed

## dim5 Platform Gate

Windows-independent. See SYSTEM-DIFF.md for vs-macOS platform differences.

Key Windows findings:
- Both commands IDB-renamed (wf3-D1 rename session confirmed)
- sub_1400A8B70 = Windows-specific storage query impl
- sub_1400F0C60 = Windows-specific merge impl
- MysteryUnlockGrant: 96B stride (Windows self-tested; macOS may differ — N1)
- No ICF-fold detected; both functions directly decompilable

## dim6 Test Plan (pending — C5 implementation side)

Listed for C5 test team; not yet run (dim6_status=pending):

1. Unit: `get_mystery_unlock_grants(repo)` → `Vec<MysteryUnlockGrant>` Ok path (discriminant==3)
2. Unit: `get_mystery_unlock_grants(repo)` → Err path (discriminant==6)
3. Unit: `MysteryUnlockGrant` struct Windows stride (96B) DTO round-trip
4. Unit: `merge_mystery_unlock_grants(repo, grants)` → Ok: merged Vec persisted
5. Unit: `merge_mystery_unlock_grants(repo, grants)` → Err path (discriminant==6)
6. Unit: merge semantics: no duplicate repos after merge
7. E2E mock: mystery-unlock IPC stale/delayed/failure/concurrency

## achievable_full_leaf_100 = true
- dim2-5: evidenced (IDA bodies confirmed, call-trees depth≥5, DTO Windows self-tested)
- dim1: evidenced via mami win frontend (closed_via_mami_frontend)
- dim6: achievable (test plan listed; C5 implementation side to run)
- evidenced_100 = false (dim6 not yet run)
