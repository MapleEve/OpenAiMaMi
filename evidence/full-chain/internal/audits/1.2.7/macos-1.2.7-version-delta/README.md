# macos-1.2.7-version-delta — 消费结论包

AiMaMi 1.2.7（测试包，版本字符串 1.2.6）相对 1.2.6 的 delta 逆向消费结论，macos-arm64 侧。

- **门控**: consumerStartReady=true / strictImplementationUse=true（限五个 delta 目标面）/ readyToImplement=false
- **合同**: `logic/CONSUMER-CONTRACT-1.2.7.md`（自足合同：命令面/owner/调用链/DTO 字段/错误/副作用/平台门/实现纪律/禁实现边界）
- **维度**: dim1-5 全闭合；dim6 留白（实现侧）
- **禁实现**: `custom_instructions_entry_enabled` / `recharge_entry_enabled` 2 项（合同 §9.1；`load_runtime_display_snapshot`/`graceful_restart_for_update` 已分别于 2026-10-06/07 由用户裁决撤销）
- **未对照声明**: LIVE_REFERENCE_NOT_RUN（红线25）
- 证据指针: `pointers/evidence-paths.md`；机器可读门禁: `gate-report.json`；包元数据: `manifest.json`

## 五个 delta 目标一句话结论

1. **账号**: 切换=先快照后切换+失败三重校验回滚（新增 finish_switch_failure_with_client）；添加=alias 命令+OAUTH commit 保护；重置卡=四层新子系统 cursor 分页（前端 camelCase↔上游 snake_case）；到期=常驻 observer 线程+5m 用量刷新 watcher。
2. **线程**: 可见性重写（sqlite threads 表+rollout JSON 指针+事务/竞态纪律）；sessions 7 新命令（健康/清理/导出）；analytics 全换 v3 索引器体系；CodexSession 26 字段 DTO。
3. **路由**: 13 诊断项只读 + 23 修复 key 分派（quiet-window+备份+事务）；readiness 面收缩为活体凭据推断；转态机 postcondition→诊断→修复→重试闭环。
4. **引擎**: chatgpt.com/backend-api/codex 六端点 + x-aimami-catalog-revision + CodexPaths 全布局（aionsale→codexmate legacy 迁移）+ legacy 别名校验规则。
5. **协议**: anthropic-version 2023-06-01 + 模型族表（sonnet-5-5/fable-5/mythos-5 族）+ SSE 六事件双向转译 + web_search 门 + 续传/签名历史保护。

## 2026-10-16：同一1.2.7 pre → release 增量入口

以上说明和true门控是pre `ac235ae0171a…`历史合同；不自动适用于release `f019dbc8e267…`。完整构建SHA、差异、错误/回滚/副作用和平台边界见 **SYSTEM-DIFF.md** 与 **logic/CONSUMER-CONTRACT-1.2.7.md §10**。

release五模块变化面已归约，原责任集合32/257/335/119/1127不重不漏。真实变化包括Skills11键/原生库存与缓存告警策略、go/pro500、reasoning额外过滤、Anthropic新请求/响应/SSE和旧hosted续传变化、MCP校验与DB持有者选择。OAuth“取消三次重试”“新增保存凭据保护”已证伪，不得沿用。

本轮mac静态比较content_closed=true：112个当前注册（105分离handler+7内联）、纠错后102个实际App调用缺handler0/未解0；完整40277名字/5406入口与54匿名候选裁定已消费，C_diff_scan_complete=true但不宣称全依赖逐body认证。两个entry_enabled是localStorage误报；5个unused未注册wrapper与clean的CCF漏提已分列，不能沿用“9全native”。cc_switch_anthropic为独立后端库，真流streamer与148普查不当作前端附属而忽略。

OAuth独立有界验证通过（329530槽，七错误断言0、重复marker0）。最新事实单写及消费者独立核验亦通过：53EA、19模块/20真实save、20份快照与逐EA名字/注释/目录核验失配0；当前host/SMB i64均349775547B、SHA68fedeab38e84f2fdf6303392bef386c2910431dcd8c76ae41968de27f57d62c。persistence_complete=true；最终双审/grounded未完成，mac_closed/readiness=false、execution_ready_for_final_review=true。release实现五门全false，dim6/live_reference未做；Windows不由本包提前ACK。稳定面浅筛不等于逐体full_leaf；旧pre裁决、门控与历史原文保持。

活动来源见manifest.release_comparison和pointers；后继仅双审/grounded及独立Windows状态，不重做五模块、不重开pre、不新版本。

## 原任务最终交付状态说明

本次mac静态比较局部终态以manifest.release_comparison为准：既有mac_closed/readiness/final_review_complete/grounded_complete已为true。旧正文中的待终审/待注册对账/C清查描述是历史检查点，完整当前注册/四角度见SYSTEM-DIFF第2、8、11节，不应再重复开逆向工作。联合任务由对应Windows独立正文与最终包审查收尾；不是重做mac基线，不提升实现门或真实App对照。
