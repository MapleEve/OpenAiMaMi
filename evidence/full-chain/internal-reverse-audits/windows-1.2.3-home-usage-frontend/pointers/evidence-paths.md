# Evidence Pointers — windows-1.2.3-home-usage-frontend

所有路径为相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`，不复制 raw artifact，只作指针引用。本包为单平台 windows-x64 canonical，证据全 win-native。

## Windows x64（本包证据源）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 131 命令静态扫描，本模块 13 命令子集（grounded 命令面）
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl` — 248 行 minified-static 控制流；本模块每命令 terminal_call 行（wrapper/argKeys/invoke-alias `re`/source chunk/部分 guard）
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-contract-report.md` — 命令级 contract report（argKeys 逐命令）
- `raw/aimami/1.2.3/windows-x64/frontend/ast-facts.json` — AST 事实（本轮未逐字节展开）
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/` — tauri-dumper 原始前端资产（chunk `index-B40jKs17.js` / `analytics-panel-6jtfGEeX.js` / `accounts-page-GdJYDnGj.js`）
- `raw/binary/AiMaMi.1.2.3 win64.exe` — Windows PE 二进制 SOT（SHA-256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`，33667584 B，PE/AMD64）
- `raw/binary/AiMaMi.1.2.3 win64.exe.i64` — win IDB（本轮未起 IDA；供后续 producer 做 dim2/dim3）

## 关联（对照/参照，非本包证据字段）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/{shared-index-app-frontend.md,analytics-maintenance-autoswitch-frontend.md}` — mac 页面级 reduce，仅作 scope/结构/深度参照，**不**作为 win 证据（doNotInferWindowsFromMacOS）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` — mac 后端 owner 基线（258 行），逐词核对本模块命令零覆盖，交叉印证两平台后端均空白
- `audits/cross-1.2.3-home-usage-frontend/` — 过渡性跨平台 DISTILLED 包（记 win 侧曾为 command-scan only；本单平台包升级为含 win-native minified CCF）
- `audits/cross-1.0.9-home-usage-frontend/DISTILLED-home-usage-load-chains.md` — 1.0.9 同 scope 模板；其 mac DTO 形状**未**跨版本/跨平台复用为 win 证据
- `audits/macos-1.2.3-home-usage-frontend/` — 配对 macOS 半（并行会话 `macos-1.2.3-home-usage-frontend-reduce-20260726`），独立闭合，不合并
- `REVERSE-STATUS.md`（`:4011` wf-aimami123-fullapp-20260724 + 本会话 `windows-1.2.3-home-usage-frontend-reduce-20260726` claim/DONE 行）
