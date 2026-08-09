# DELTA-LOGIC-1.2.3 — macOS relay 相对 1.2.2 的行为差异

来源：`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`（生产者：mini 本机，双 IDA 已加载 1.2.3）。

## 1. 前端 delta

命令数 131（1.2.2=129），新增 2 条：`get_autostart_state`+`set_autostart_enabled`（开机自启，changelog 未记录）——**与 relay 无直接关系**，但证明前端优先提取方法论能抓出 changelog 未记录的新特性。relay 域内命令数量本身无新增/删除。

## 2. 后端 delta（红线19 全模块，非只命令）

changelog 三项全是行为后端变更（非新命令）。mac 真 App 函数：1.2.2 **1267** → 1.2.3 **1638**，216 个真实新函数（用 IDA 自己的函数枚举 diff，而非 `nm` VA——见下方教训）。

### changelog ↔ relay 相关模块映射

| changelog | relay 相关模块/函数 | 关键行为 |
|---|---|---|
| **②新旧客户端兼容 + 修复无法关闭路由** | `core::relay::codex_writer`+`invariants`（`RouterConfigSurface`） | **`strip_invalid_router_top_level_model`**：扫 config.toml 顶层，剥离引用失效 provider 的 `model`/`model_provider` 指令 + 清理孤儿 `aimami_relay_*` 键——旧版切换/关闭中转后 config 残留旧中转生成的 model id 导致下次又被路由回中转，这是"无法关闭路由"的根因；`render_bottom_block`/`render_router_top_block` 生成 `# >>> aimami-relay managed` 注入块；`commands::relay::quit_keeping_router`（⚠ `AppHandle::exit(0)` 退应用留路由） |
| **③中转模型协议 + 推理层级适配** | `codex_thread_visibility`+`codex_diagnostic`+`translator`+`proxy_server`+`storage`+`codex_catalog` | 改写 Codex rollout 会话文件首条 `session_meta`（`patch_model_fallback_rollout` 同步 `model_provider`+`model_reasoning_effort`；`base_instructions` 补丁与 `guardian_poisoned`/`thread_poisoned` 一致性诊断）+ translator 消息格式转换（OpenAI↔Anthropic / Kimi coding `prompt_cache_key` 注入 / `<think>` 推理前缀剥离）+ storage MiniMax M3 官方协议迁移 + catalog 官方推理模型（gpt-5.6 系）查找 |

（①自动处理 ChatGPT/Codex 进程占用、①账号切换稳定性 属 `platform::process`/`core::repository`/`commands::accounts` 范畴，非 relay 域，不在本包展开，见 BASELINE-FINAL-1.2.3.md。）

### ⚠ relay 域破坏性副作用

- `commands::relay::quit_keeping_router` — `AppHandle::exit(0)`。
- `codex_thread_visibility::checkpoint_after_committed_write` — SQLite `PRAGMA wal_checkpoint(TRUNCATE)`（常规 WAL 维护，非数据破坏）。
- `codex_writer`/`invariants`/`config_takeover`/`transition_journal`/`router_unlock_auth` 的 `remove_file` 操作均自建中间态，有备份/存在性兜底（详见 BASELINE-FINAL-1.2.3.md §1 破坏性副作用全编目）。

## 3. 残留闭合（本轮"没做完的必须做完"的过程记录）

- ⚠️→✅ **commands/relay 9 条曾疑似缺失命令 wrapper**：4 条系误判（早已落盘在 `commands/system/`或`core/relay/manager/`），4 条新 decompile 完整落盘，1 条（`fetch_relay_models_draft`）历史曾遇 decompile 工具服务端硬截断（~1024 字符响应通道上限）。**本条原声称"最终用 `disasm` 分块反汇编续接补完，无残留截断桩"，2026-07-24 grounded 复验证实为假**：该 `disasm` 续接只核对了反汇编指令地址范围，`.c` 伪代码文件本体当时仍是含 `!! TRUNCATED STUB - 未完整 !!` 标记、括号不配平（1/0）、结尾为裸反汇编的桩，从未真正续接补完。已于本轮通过 `py_exec_file` 在 IDA 主机侧执行 `ida_<反编译器>.decompile(0x100193810)`（绕开响应通道截断，直接写盘）真正补完：54,909 字符、括号配平（63/63）、`return result; }}` 正常闭合；旧桩存为 `.c.stub.bak`。现在"无残留截断桩"才是真的。全树复验（1853 个 `.c` 文件）未发现其他真截断。
- ✅ **win 符号级 delta**（供跨平台对照，win 侧无 nm，靠 panic 路径 + 行为锚点串定位）：15 个 win delta 锚点函数（2 autostart 命令 owner + 4 新模块 anchor + session_meta 改写 3 + `aimami_relay_` 清理 3〔②关闭路由修复核心〕 + reasoning 1 + router_model_restore 3）。

## 4. 教训：nm VA ≠ IDA 函数起始

第一轮用 `nm` 符号 VA 当 decompile 地址，但 nm VA 有偏移/含被内联的局部符号，导致大量 `.c` 名↔体错位（如某地址逆出整个 `run()` 主入口）。Workflow 对抗 verify 独立抓出后改用 IDA 自己的函数枚举（每函数唯一地址+名，ICF 已解析）重算并重逆，抽验 `strip_invalid_router_top_level_model` 名↔体已一致。

## 5. same-set（未变函数）迁移规约

按迁移规约，同平台/同 scope 无 diff 的函数直接沿用 1.2.2 证据，不重逆（本包不复制该证据文本，只记录迁移事实；1.2.2 relay 证据的具体位置未在本次核查范围内单独枚举，如需可通过 `pointers/evidence-paths.md` 追加 1.2.2 bundle 指针）。
