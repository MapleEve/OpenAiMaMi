# Evidence Pointers — macos-1.2.3-home-usage-frontend

所有路径为相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`，不复制 raw artifact，只作指针引用。

## macOS arm64（本包 dim1 证据来源）

- `raw/aimami/1.2.3/macos-arm64/frontend/pages/shared-index-app-frontend.md` — App 壳 `i7()` 组件树/状态模型（§1-§2）、Dashboard `K1()` 交互→命令表（§3）、共享快照 hook `E2()`/`jA` 推送订阅（§2.2）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/analytics-maintenance-autoswitch-frontend.md` — §1 `AnalyticsPanel`（`Lt`）组件树、状态模型、6 个 analytics useQuery 表、交互→命令、空态/错误态
- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 131 条命令静态扫描（命令名核对）
- `raw/aimami/1.2.3/macos-arm64/frontend/frontend-control-flow.jsonl` — control-flow 静态扫描
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` — 后端 command owner 基线（258 行，本模块命令**未覆盖**，零命中，确认 dim2 gap）
- `raw/binary/` — AiMaMi 1.2.3 macos-arm64 binary SOT（SHA 权威来源，本轮未重算）

## 兄弟包（后端交叉引用，非本包证据来源）

- `audits/macos-1.2.3-sessions-analytics/` — 已 reduce 5 个 analytics 命令（load_session/token/tool/change/usage_analytics）的 core:: 后端体；consumers 需本模块 analytics 命令的后端 dim2/dim3 时读此包，本前端-surface 包不重复领取
- `audits/cross-1.2.3-home-usage-frontend/` — 本包补齐其 gate-report `gap_needs_reducer=2` 的 macOS 那一个（mac 侧结论 consumed）

## 关联历史（consumed，非本包证据来源，仅作对照）

- `audits/cross-1.0.9-home-usage-frontend/DISTILLED-home-usage-load-chains.md` — 1.0.9 同 scope 模板，供结构/措辞参考，未跨版本复用数据字段
- `REVERSE-STATUS.md:4011`（`<审计会话> 独立确认 home-usage-frontend 缺 1.2.3 canonical 包

## Windows（不在本单平台包 scope，归属 windows-1.2.3-home-usage-frontend 未产出）

- `raw/aimami/1.2.3/windows-x64/frontend/{ipc-contracts.jsonl,frontend-contract-report.md,frontend-control-flow.jsonl,ast-facts.json}` — 机器扫描存在，无 page-level UI reduce；Windows render-surface Unknown，禁从本 macOS 包外推
