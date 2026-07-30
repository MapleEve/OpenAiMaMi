# Frontend -> IPC/HTTP -> Rust Report

Binary: `//raw/aimami/1.2.4/macos-arm64/frontend/AiMaMi.arm64.thin`
Feature: `unknown`
Frontend root: `//raw/aimami/1.2.4/macos-arm64/dumped`

## Frontend Evidence

- Dump log: `//raw/aimami/1.2.4/macos-arm64/tauri-dumper.log`
- Source maps: `//raw/aimami/1.2.4/macos-arm64/frontend/source-maps.txt`
- Source map refs: `//raw/aimami/1.2.4/macos-arm64/frontend/source-map-refs.txt`
- IPC contracts: `//raw/aimami/1.2.4/macos-arm64/frontend/ipc-contracts.jsonl`
- HTTP hits: `//raw/aimami/1.2.4/macos-arm64/frontend/http-hits.jsonl`
- Router hits: `//raw/aimami/1.2.4/macos-arm64/frontend/router-hits.jsonl`
- Query hits: `//raw/aimami/1.2.4/macos-arm64/frontend/query-hits.jsonl`
- Contract summary: `//raw/aimami/1.2.4/macos-arm64/frontend/frontend-contract-report.md`

## Mapping Template

Fill one block per page:

```text
page:
frontend file/component:
route:
query/mutation:
IPC command or HTTP call:
request fields:
response fields consumed:
Rust command symbol:
Rust handler/service:
persistence/API/DB:
confidence:
evidence:
```
