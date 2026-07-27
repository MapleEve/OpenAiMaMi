# Evidence Pointers — windows-1.2.3-maintenance

所有路径均相对 ``（本会话核实的实际 SMB 挂载点，硬编码，红线16）。本文件只给指针，不复制 raw 内容（除 README/SYSTEM-DIFF 中为定位事实所需的极短引用行）。

## raw evidence（backend，1.2.3 windows-x64，本包主 scope）

- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/rebuild_registry_0x14016c220.c` — command wrapper，command-name string xref ground-truth
- `raw/aimami/1.2.3/windows-x64/repository/ida/pseudocode/rebuild_registry_with_policy_0x14039f840.c` — deep leaf（2095 行），跨平台字符串签名标注
- `raw/aimami/1.2.3/windows-x64/repository/ida/pseudocode/persist_registry_0x14038fb30.c` — call-tree 第三跳（写回），跨平台字符串签名标注
- `clean`：**无对应路径**——全树搜索无命中，已在 README.md/SYSTEM-DIFF.md 记录为零证据缺口

## raw evidence（frontend，1.2.3 windows-x64，跨平台共享 JS bundle）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — 含 `load_snapshot`/`clean`/`rebuild_registry` 三条 `tauriInvokeWrapper` 条目（均在 `assets/index-B40jKs17.js:87` 内同一 `Ee` API 对象字面量中定义）
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl` — `clean`/`rebuild_registry` 各一条，均 `trigger.type=minified-static-function`、`element:null`（仅证明 API 包装函数存在，未证明真实 UI 调用点）

## 1.0.9 先验证据（历史参照，非迁移证据——见 SYSTEM-DIFF.md 说明为何不满足 RULE9 迁移条件）

- `raw/aimami/1.0.9/windows/system/rebuild_registry/evidence.md` — strictImplementationUse 档，dim1-5 confirmed
- `raw/aimami/1.0.9/windows/system/clean/evidence.md` — strictImplementationUse 档，dim1-5 confirmed
- `raw/aimami/1.0.9/macos/maintenance/rebuild_registry/leaf.md` — mac 侧 1.0.9 对照（用于确认 1.0.9 时期跨平台一致，不用于 1.2.3 判定）
- `raw/aimami/1.0.9/macos/maintenance/clean/`（目录存在，本 pass 未展开读取——非本包主 scope 需要，仅作路径记录）

## 姊妹/相邻结论包（跨命令域交叉引用）

- `internal-reverse/audits/windows-1.2.3-accounts/` — `load_snapshot` 权威来源（该包 12 条 accounts 域命令之一，`gate-report.json` 中 `consumerStartBlocked_commands` 含 `load_snapshot`）
- `internal-reverse/audits/windows-1.2.3-relay/` — 参照案例：本包 `clean` 的"零证据但前端仍定义"疑似模式，与该包 `get_codex_router_auth_readiness` 的 ICF 折叠案例是同一类现象的两种可能解释之一（folded-into-shared-dispatcher），未证实，仅作方法学参照
- `internal-reverse/audits/windows-1.0.9-maintenance/`、`internal-reverse/audits/macos-1.0.9-maintenance/` — **注意**：这两个既有 1.0.9 "maintenance" 结论包覆盖的是 `graceful_restart_for_update`/`restart_codex`（OTA 重启域），与本包的 `rebuild_registry`/`clean`/`load_snapshot`（账号注册表维护域）是**不同的命令集合**，尽管两者在 1.0.9 taxonomy 里恰好共享"maintenance"这个模块标签。不要把这两个既有包误当作本包主题的前身。

## INDEX.jsonl 命中（本次核实/append）

- 本次 append（append-only，未改旧行）：见 README.md 同级 `windows-1.2.3-maintenance` package-level 条目；session `maintenance123-reduce-conclusion-20260725`。
- 未对 `rebuild_registry`/`persist_registry`/`clean` 单独 leaf-level 追加条目（本 pass 是 package-level 归并，未做逐函数级 INDEX 追加，遵循任务范围：只读已有证据 + 写结论文档）。
