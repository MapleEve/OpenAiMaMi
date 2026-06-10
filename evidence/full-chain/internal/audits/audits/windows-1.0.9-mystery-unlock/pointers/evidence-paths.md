# Evidence Paths — windows-1.0.9-mystery-unlock
# session: <audit-session>

## Binary SOT
`<source-location>/raw/binary/AiMaM 1.0.9 win64.exe`
sha256: a5822387fa3f56dc03893111f4ffdd074daa882e8887ec4e7c394879c0e9fe0b

## Raw Evidence
`<source-location>/raw/aimami/1.0.9/windows-x64/mystery-unlock/get_mystery_unlock_grants/`
`<source-location>/raw/aimami/1.0.9/windows-x64/mystery-unlock/merge_mystery_unlock_grants/`

## dim1 Frontend Leaf Source (mami)
Source: `OpenAiMaMi/evidence/full-chain/raw/aimami/1.0.9/windows-x64/frontend/tauri-dumped/frontend/ipc-contracts.jsonl`
- Line 86, col 31666: `getMysteryUnlockGrants:()=>G("get_mystery_unlock_grants")`
- Snippet: `mergeMysteryUnlockGrants:t=>G("merge_mystery_unlock_grants",{grants:t})`

## dim2-5 IDA Evidence
- Win IDB: IDB saved at <source-location> (binary sha a5822387fa3f)
- get_mystery_unlock_grants: 0x14027E640 (IDB-renamed wf3-D1)
- merge_mystery_unlock_grants: 0x1402719B0 (IDB-renamed wf3-D1)
- session <audit-session> fresh decompile confirms both bodies
