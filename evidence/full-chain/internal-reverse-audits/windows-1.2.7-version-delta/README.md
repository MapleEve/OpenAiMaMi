# windows-1.2.7-version-delta — 消费结论包

AiMaMi 1.2.7（测试包，版本字符串 1.2.6）相对 1.2.6 的 delta 逆向消费结论，windows-x64 侧。

- **门控**: consumerStartReady=true / strictImplementationUse=true（限五个 delta 目标面）/ readyToImplement=false
- **合同**: `logic/CONSUMER-CONTRACT-1.2.7.md`（win owner EA + 平台分叉面；行为语义与 mac 合同同构，字段级 DTO 经 win 串池独立实证零分叉）
- **维度**: dim1-5 全闭合；dim6 留白
- **dim5 分叉**: 进程扫描 Toolhelp32（三叶 decompile 在案）vs mac `ps`；LaunchAgents mac-only；`useStateDbOnly`/`authinfo` 字面量 win 0 命中（1.2.7 当前 build 内待深核，不阻塞 dim5——DTO/错误/端点已实证零分叉）
- **未对照声明**: LIVE_REFERENCE_NOT_RUN
- 证据指针: `pointers/evidence-paths.md`；门禁: `gate-report.json`；元数据: `manifest.json`

## 当前 1.2.7 pre→release 静态比较交付

以上旧段落是1.2.6→pre的历史窄scope门，不能作为当前release放行。当前比较pre 51cb41b613aa / release fd5f0c5aa7d5，均在同一1.2.7版本内。

结论：存在真实差异。Windows新增go/pro500值域、OAuth User-Agent更新、Skills前端60秒缓存/挂载及手动刷新；Anthropic请求校验、严格UTF8、EOF和terminal策略发生实质变化。Windows pre已具Skills11字段和只读保护，不能照搬mac的8→11新增结论。OAuth启动后三采样/末尾连续通过保护保留，相关保护不是release新增；两条82B失败文本不变。

阅读SYSTEM-DIFF → FULL-CHAIN → DELTA-LOGIC即可消费当前结论，不必回raw拼接语义；pointers保留审计溯源。最终状态以manifest.release_comparison和reviews交叉复核为准。真实App未对照，dim6/live_reference及release全部实现门保持false，不声明全App源码恢复。

Windows保存实物738972383B/SHA0ff4fc87d1308471f1a803d80f23c9d792c5325812a54265d8dacbf77b21dec5；保存/内容专项完成不自动等于整包交付完成。

## Catalog消费者责任映射

DELTA-LOGIC第11节已补实质业务合同与210条责任到正文小节映射，不再以30分片计数代替消费者逻辑。系统代理/脱敏/线程分页/导入revision/受管恢复与备份清理/消息预算/后台退出等均从该入口发现。当前来源冲突与最终复核仍按manifest记录，不用覆盖数冒称无blocking。

## Provider导入清理定点裁决

最终commit前，包装器把本次导入产生的88B revision guard条目byte+80置1，表示抑制条件删除。最终state commit的out tag=-1为成功，成功支保持1；非成功支才置0，随后销毁接出的guard buffer。只有byte+80=false才按保存的路径和文件identity尝试删除新revision；identity不等拒删，删除失败只日志，不能保证所有失败revision均已删除。不能把另一层revision写入核的-1失败编码混用于state commit；亦不能把内存drop当成磁盘回滚。pre/release这段清理方向同形，caller前检时机变化仍保留。异常展开、OOM及未完整展开的collector内部不被扩成全局补偿证明。

仅原192叙述被授权纠正；逐项错误/字段校验与caller前检时机差异不变，所有实现门不提升。完整依据见DELTA-LOGIC第11节及pointers中的provider-import-correction。
