# System Diff — mystery-unlock cluster (AiMaMi 1.2.3 macOS arm64)

## Platform Artifacts

- 仅 macOS arm64 已读。Windows 同版本 artifact 未读，本包不对 Windows 下结论（禁止外推）。

## Frontend IPC / Control-flow

- Unknown：本轮未做前端 CCF 精确定位；`ipc-contracts.jsonl` 抽查未直接命中集群 A/B 相关 command 名。因集群 A 已判 `tos_circumvention` 且 SKIP，不再补前端定位工作；集群 B（`mystery_unlock_grants`）若后续要实现，需要单独补前端 CCF。

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- 集群 A（`router_unlock_auth` + `legacy_virtual_auth` + `is_aimami_managed_virtual_auth` + 2 个 `codex_diagnostic` residue check/fix）：pseudocode 全部为非失败 decompile（`[FULL IDA decompiler]`/基线 same-set 标记），call-tree 可读到文件系统读写（`std::fs::read`/`atomic_write::write_atomic_with_mode`/`remove_file_if_exists`）与 JSON 序列化（`serde_json`）叶子，逻辑闭合。因判定为 `tos_circumvention`，本包**不产出可实现的 call-tree/interface 细节**，只在 README/TOS-CLASSIFICATION 描述行为轮廓。
- 集群 B（`mystery_unlock_grants`）：`commands::system::*` 是标准 Tauri command wrapper（mutex-guarded once-cell 初始化 + 转调 repository），`core::repository::Repository::*` 是本地设置读写 + 时间戳过滤逻辑，call-tree 到本地存储叶子，未见网络/HTTP 调用。

## Interface / Error / Boundary

- 集群 A：写入目标是 `CodexPaths` 解析的 auth 文件路径；有 fs 错误处理分支（`CoreError` envelope），未见吞错。SKIP 项不展开 DTO 字段清单。
- 集群 B：无对外可见错误 envelope 证据缺口以外的异常记录；未做 DTO/前端消费字段闭合（Unknown，留给后续若要实现的独立包）。

## Gate Leaf

- 集群 A 全部 `tos_circumvention` / `implementation_use=false`（产品决策，非证据缺口，不会因为补更多证据而改变）。
- 集群 B 全部 `normal_feature`，gate leaf 目前最多到 `pre_acceptance_evidence_pack`（backend owner/pseudocode 已闭合，前端/DTO/双平台/验收映射未闭合）。

## Plugin / Capability

- 无插件层关联证据（本包范围内未见与 `PluginRegistry` 交叉）。

## OTA / Package

- 未涉及。

## Resource / Binary Surface

- SHA/size 见 `pointers/evidence-paths.md`（引用 `INDEX.jsonl` 既有记录，本包未新增 raw 证据，只读现有 raw 目录）。

## Unknown

- Windows 平台对应机制：Unknown。
- 集群 A 前端触发入口：Unknown（有意不补，因 SKIP）。
- `mystery_route_allowed` 18 字符未解常量分支：Unknown（沿用既有 baseline 记录，未本轮重读）。
