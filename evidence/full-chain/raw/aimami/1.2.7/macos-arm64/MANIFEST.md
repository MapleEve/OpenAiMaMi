# Reverse Evidence Manifest — aimami 1.2.7 macos-arm64（delta 盘点轮）

- archive_path: `<内部存储>/raw/aimami/1.2.7/macos-arm64`
- app_bundle: `<内部存储>/raw/binary/AiMaMi 1.2.7.app`
- binary(fat): `raw/binary/AiMaMi 1.2.7.app/Contents/MacOS/AiMaMi` sha256=`ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9`
- binary(arm64 thin, tauri-dumper 输入): `frontend/AiMaMi.arm64.thin` sha256=`1ac56cdd5003d7f5edf3e630a20050a2792420b1c543702ed89fe998aa6f8164`
- version_string: `1.2.6`（测试包，实际内容为 1.2.7，per PM 2026-09-30）
- frontend_root: `dumped/`（tauri-dumper 0.1.5，2.1MB，与 windows-x64 dumped 的 JS 资产同名同哈希=同一次前端构建；仅 index.html 平台差异）
- frontend_contracts: `frontend/ipc-contracts.jsonl`（147 行）
- session: `<审计会话>`
- created_at: `2026-09-30`
- extraction commands:
  - `lipo -thin arm64 <fat> -output AiMaMi.arm64.thin`（同 1.2.6 先例；红线36：slice 等价已决）
  - `tauri-dumper --input AiMaMi.arm64.thin --output dumped/`
  - `extract_frontend_contracts.py --frontend dumped --out frontend --prefer-recovered-source`

