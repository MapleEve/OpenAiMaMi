# COVERAGE-FINAL — AiMaMi 1.2.2 → 1.2.3 delta 终稿

> 平台版本重新对齐: macOS=1.2.3, Windows=1.2.3。baseline=1.2.2。
> 所有数字经 orchestrator 扫盘 grounded 复核(截断守卫 红线20 + 名↔体一致校验)。

## 1. 前端命令 delta(131 命令, 两平台一致)
- ADDED(2): get_autostart_state, set_autostart_enabled(开机自启, changelog 未记录, 前端优先抓出)。
- REMOVED(0) / ARGKEY_CHANGED(0)。

## 2. 后端 delta(全模块函数枚举 diff, 红线19)
- 真实新增 App 函数: **216**(应用函数集 1.2.2=1267 → 1.2.3=1638, 名↔地址一致的函数枚举 diff, 非符号 VA)。
- 全 216 完整反编译(超大体分页全解, 红线13; 名↔体一致校验通过)。

## 3. changelog ↔ 模块映射
- **①自动处理 ChatGPT/Codex 进程占用** → platform::process: 分类(ChatGPT.app/IDE 插件/外部写入者)→ 枚举(ps 扫描, 保护 DB 占用者不误杀)→ 编排(osascript 退 ChatGPT → 超时强杀链)。
- **①账号切换稳定性** → core::repository auto-switch 状态机 + commands::accounts 切换回滚(还原 auth/registry 快照)+ account_coordination 快照锁 + SnapshotQuarantine 隔离。
- **②修复无法关闭路由** → core::relay::codex_writer::strip_invalid_router_top_level_model: 剥离 config.toml 里引用失效 provider 的顶层 model 指令 + 清理孤儿 aimami_relay_* 键(旧中转 model id 残留导致下次又被路由回中转的根因)。
- **③中转模型协议 + 推理层级适配** → session_meta 改写(model_provider/model_reasoning_effort 同步)+ translator 格式转换(OpenAI↔Anthropic / Kimi coding / think 前缀剥离)+ storage MiniMax M3 迁移。
- **autostart(新模块)** → commands::autostart: 包装 launch-at-login, apply_default_autostart_on_router_enable(路由启用时默认开自启)。
- **account-token(未记录, 量最大)** → oauth_refresh(token 刷新策略/JWT)+ account_metadata(新, 订阅元数据)+ account_io/auth。

## 4. 破坏性副作用(红线20 编目)
- 进程: osascript 退 ChatGPT / force kill / voice sidecar kill -9 / 应用 exit。
- 删除: 账号删除 remove_dir_all(经隔离区+回滚)/ skills remove_dir_all(删前备份)/ keychain 删 / config 备份 remove_file(有兜底)。
- 系统: launchd daemon 装卸 / 登录项 / 单实例锁截断 / chmod 权限收紧。
- 无对用户真实 auth.json/config.toml 的无条件裸删; config.toml 是覆盖写+备份。

## 5. 落盘 + 校验
- mac 216 delta 叶 + 全 App 函数按模块归目录树; win(strip)按 panic 路径 + 跨平台字符串签名恢复命令名/模块归属/delta 锚点。
- 名↔体一致校验: 用应用自身函数枚举地址(非符号 VA), 抽验通过。截断守卫无裸 artifact。保存分析库双平台。
- exhaustive(1638 全函数逐个)基线留内部, 本文只发 delta。
