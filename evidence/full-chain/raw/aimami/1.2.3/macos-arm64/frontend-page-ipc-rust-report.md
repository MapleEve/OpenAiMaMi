# Frontend -> IPC/HTTP -> Rust Report

Binary: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/AiMaMi.arm64.thin`
Feature: `unknown`
Frontend root: `<内部存储>/raw/aimami/1.2.3/macos-arm64/dumped`

## Frontend Evidence

- Dump log: `<内部存储>/raw/aimami/1.2.3/macos-arm64/tauri-dumper.log`
- Source maps: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/source-maps.txt`
- Source map refs: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/source-map-refs.txt`
- IPC contracts: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`
- HTTP hits: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/http-hits.jsonl`
- Router hits: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/router-hits.jsonl`
- Query hits: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/query-hits.jsonl`
- Contract summary: `<内部存储>/raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md`

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
