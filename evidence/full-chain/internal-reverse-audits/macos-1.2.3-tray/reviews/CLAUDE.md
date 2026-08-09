# Claude 独立复核 — macos-1.2.3-tray

复核日期：2026-07-24
复核范围：本次会话即产出会话本身（无独立复核会话）——本文件记录产出过程中的自核步骤，而非对另一份先行文档的事后复核。这是 distillation 类任务（读盘归并已有 raw 证据，非新 IDA 反编译），故复核内容聚焦"读到的东西是否被如实转述"，而非"跨会话结论一致性"。

## 采用（Accepted）

- `backend-baseline/commands-baseline.md` §5 对 `tray_menu`（10 文件）的模块职责总览——本次逐字重读全部 10 个 `.c` 文件后，除 `refresh_tray_menu`/`refresh_tray_menu_with_snapshot` 的"是否完整重建"这一点（见下方驳回项）外，其余描述均与伪代码内容一致，采纳。
- `backend-baseline/voice-baseline.md` §3 对 `update_tray_recording_state` 的描述——逐字重读 `.c` 文件后完全一致（"mainstop"托盘图标查找、PNG 解码、录音态红点像素级绘制、`set_icon`+`set_icon_as_template` 联动），采纳。
- 前端 0 IPC 命中的判定——不是简单相信 grep 结果为 0，而是先用同一份 `ipc-contracts.jsonl` 对 `relay` 相关命令（`delete_relay_provider`/`upsert_relay_provider`）做了阳性对照，确认抽取器本身工作正常，再确认 `tray` 的 0 命中是真实架构缺失（原生菜单回调），非抽取失败。

## 驳回/纠正（Rejected/Corrected）

- `backend-baseline/commands-baseline.md` §5 原文："`refresh_tray_menu` / `refresh_tray_menu_with_snapshot` | 菜单内容刷新（**不重建整个菜单对象**，更新展示文案）"——逐字读 `refresh_tray_menu_0x1003565f0.c` 与 `refresh_tray_menu_with_snapshot_0x10035a260.c` 发现两者均直接调用完整的 `create_tray_menu`/`create_tray_menu_from_snapshot` 构建器重建整个菜单对象，再通过 `tauri::tray::TrayIcon::set_menu` 整体替换，并非原地更新展示文案。这是本次复核中发现的唯一一处需要纠正既有底稿的地方，已记入 `gate-report.json.corrections_to_prior_baseline` 与 `README.md`/`SYSTEM-DIFF.md`。未删除或掩盖原底稿的表述，只是标注纠正并说明依据（具体行号/调用序列）。

## 仍 Unknown（如实标注，未升级为 accepted）

- `tray_account:` 分支的确认对话框到 `switch_account_and_restart_sync` 闭包的确切接线——闭包存在且被确认在切换成功后调用 `refresh_tray_menu`，但对话框按钮回调是否就是触发该闭包的唯一路径，本次读码未能 100% 确认（`handle_tray_menu_event` 主体与该闭包在符号层面各自独立，调用关系需要 xref 才能坐实，本次未连 IDA MCP，无法做 xref 查询）。标 `blocks_start`，未升级为 `accepted_unknown`（因为不是工具限制类，是本次会话确实没有条件核实）。
- windows-x64 1.2.3 tray 的 2 个 `sub_XXXX` 函数身份——完全未尝试解析，如实标 `blocks_start`，非本任务范围。

## 复核方法

未连接 IDA MCP，未做新反编译（红线17 `<门控>` 要求每个用 IDA 的 agent 起手核 `server_health`——本次会话确认不使用 IDA 路线，纯读盘归并，不触发该门）。12 个原始 `.c` 文件全部逐字读完（非抽样/非仅读文件头注释），`backend-baseline/*.md` 两份既有分析作为交叉核对对象而非直接抄录来源。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（`OUTPUT-SPEC.md` 允许"至少一份存在"）。
