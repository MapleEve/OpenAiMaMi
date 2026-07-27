# Claude (CC) 独立复核 — windows-1.2.3-plugins

- Evidence path 使用：`${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/binary/AiMaMi.1.2.3 win64.exe`、`.../AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi`、`.../raw/aimami/1.2.3/{windows-x64,macos-arm64}/frontend/ipc-contracts.jsonl`、`.../raw/aimami/1.2.3/windows-x64/` 目录清单、`.../raw/binary/AiMaM 1.0.9 win64.exe`（方法论正对照）。
- 覆盖范围：三类独立 Windows 同平台证据（raw 目录拓扑、131 命令前端枚举、二进制全字符串枚举）逐一核对 11 个 1.0.9 anchor 字符串 + 4 个命令名，零命中；macOS 1.2.3 同法独立核对，零命中（仅旁证，未用于外推 Windows 结论）；1.0.9 windows 正对照命中 `PluginRegistry` 字符串，验证方法有效。
- 缺口：未跑 IDA decompile/xrefs（无 owner 可逆，缺证据本身即结论一部分）；未排除死代码无字符串残留的极小概率场景，已在 README/AI.md/SYSTEM-DIFF.md 标注为 `Unknown (low-likelihood, unfalsifiable by static string search alone)`，未升级。
- 不应行动项：不得据此声明 C5 侧"plugins 功能"upstream 实现依据（模块已不存在，无上游行为可复刻）；不得外推到其他版本（1.1.x/1.2.1/1.2.2）；不得用此 Windows 结论替代未来若需要的独立 macOS 1.2.3 canonical 审计包（本包 macOS 部分仅为旁证）。
- 结论：`removed=true`，与 `manifest.json` / `README.md` / `AI.md` / `SYSTEM-DIFF.md` / `DISTILLED.md` 口径一致。
