# graceful_restart_for_update — win 1.2.7 最新 exe full-chain leaf

命令 `graceful_restart_for_update` 的 Windows 后端全链证据包。本 leaf 由用户 2026-10-07「欠账全做完 0 残留」直派触发：撤销 win 侧禁实现条目（Oct 6 复核已呈报三重实证：池化双窗 + 全名串唯一 xref + dispatcher caller；该呈报无 SoT 登记，本轮红线 31 全部现场独立重证后落盘）。

- 二进制锚点：<内部存储>\AiMaMi.1.2.7 win64.exe（sha256 51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf，112594 函数，IDA <审计环境>，server_health live 实测 module=AiMaMi.1.2.7 win64.exe）
- glue：0x1405F27C0（586B，Oct 6 会话已命名、本轮补齐注释并归目录 /codexmate_lib/commands/system/）
- 模块归属：src/commands/system（推断级：注册名表序紧随 restart_codex/run_daemon_once（mac 符号均为 commands::system）之后 + 与 restart_codex 同为进程重启族；函数体为纯 tauri AppHandle 调用无模块 panic 面，如实标注）
- 注册：win dispatcher 池化双窗比较（first16 graceful_restart@0x141A22C00 + last16 start_for_update@0x141A22BF0，比较点 0x1405fcd97/0x1405fcd9f，arm call 0x1405F27C0@0x140600cb6）+ .rdata 注册表项 0x141ea82e8（首字段=glue RVA 0x5f27c0），本轮 live 独立复验
- 语义：零参数命令（前端 CCF argKeys=[]）；从 invoke env 提取 AppHandle（state key "app"）后调用 tauri-2.10.3 AppHandle 重启机制（request_restart+restart 内联合一，**发散 `-> !`，调用点后 ud2 编译器证实**）：restart flag CAS+WaitOnAddress → exit-requested 置位 → 事件投递 → cleanup_before_exit → `tauri::process::restart`（spawn current_exe+原 argv → exit(0)，先起子进程再退旧进程）。**前端 invoke 永无响应（win）**。
- ⚠破坏性副作用：进程退出+重启（进程管理类）；本链无数据落盘、无文件写。
- mac 对照（只读核验，非 mac leaf）：mac 1.2.7 **已注册**（名字表 0x1018c0328+301 含该名 + wrapper 0x100638510 + dispatcher 比较点 0x100615586）——推翻既往「mac 零符号」；mac 调 `AppHandle::request_restart`（0x1006e9010，非发散：置 flag@+5192 + tao send_event(31)，成功返回）后 wrapper 应答 unit（tag 6）——**与 win 行为分叉：mac 有 IPC 响应、win 无**。

七件套：README.md / manifest.json / evidence.md / interface-report.json / call-tree.json / gate-report.json / data/producer-ledger.json；伪代码 8 份在 ida/pseudocode/。

门控状态见 gate-report.json：strictImplementationUse=true（win 侧单命令面），readyToImplement 维持 false（dim6 留白 + LIVE_REFERENCE_NOT_RUN）。
