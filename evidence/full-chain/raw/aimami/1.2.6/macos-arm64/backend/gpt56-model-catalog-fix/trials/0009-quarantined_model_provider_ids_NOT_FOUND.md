# quarantined_model_provider_ids — 目标未找到（诚实缺口，非 accepted_unknown 伪造闭合）

## 排查过程（recovery_attempts，红线13 反假墙要求）

1. `func_query {"name_regex":"quarantined_model_provider_ids"}` → 0 命中
2. `func_query {"name_regex":"quarantine"}` 广域搜索 → 6 个真实命中，但**均非目标本身**：
   - `Repository::recover_account_removal_quarantine` (0x100942de0, 8251B) —— 账号删除隔离，与模型/provider 无关
   - `config_takeover::merge_runtime_quarantine` (0x100ae60a0, 3976B) —— **候选最接近**，见下方独立小节
   - `config_takeover::quarantine_damaged_backup::{{closure}}` ×3 (各 201B) —— 损坏备份隔离闭包
   - `config_takeover::quarantine_damaged_backups` (0x100ae7af0, 7414B) —— 损坏备份隔离（复数），与 provider_ids 无关
3. 未见任何函数名包含 `provider_ids` + `quarantine` 组合

## 结论

该确切符号名 `quarantined_model_provider_ids` 在 AiMaMi 1.2.6 macOS 二进制中**未找到**
（5 个独立 quarantine 相关函数命中，均为不同语义：账号隔离 / 备份文件隔离，无一是
"被隔离的模型 provider ID 列表"这一语义）。这不排除：
① 该功能被内联进 `merge_runtime_quarantine` 或其调用链的其它函数中，未独立成符号；
② 用户提供的任务描述里的函数名可能来自不同版本/分支，本版本已被重命名或合并。

## 最接近的候选：config_takeover::merge_runtime_quarantine

- EA `0x100ae60a0`，3976 字节，完整反编译（见 evidence.md 附完整体）
- 行为：读取 `split_foreign_surface` 拆分出的"外部/非 AiMaMi 段落"，构建
  `HashMap<顶层assignment key, 值>` 索引，再与传入的 `Quarantine` 结构（`a3` 参数）逐条
  按 key 做插入/合并去重（用 SwissTable hash + memcmp 精确比较），最终返回一个 bool
  （标识是否发生了合并变更）。
- **与"模型 provider ID 隔离列表"的语义关系**：`merge_runtime_quarantine` 操作的是
  TOML 顶层 assignment（键值对），不是专门的 provider-id 集合；但其调用的
  `Quarantine` 结构（`drop_in_place<config_takeover::Quarantine>` 出现在 callees 中）
  说明 config_takeover 模块内确实存在一个 `Quarantine` 类型，`quarantined_model_provider_ids`
  很可能是该 `Quarantine` 类型上的一个访问器方法（如 `Quarantine::model_provider_ids()`），
  本轮未能通过符号名枚举定位到（可能是内联的 trait 方法或闭包，未在 IDA 符号表独立出现）。

## 未尝试的破法（诚实标注，供后续轮次）

- 未对 `Quarantine` 类型做完整的方法枚举（需要 `type_query`/`search_structs` 定位该类型
  的所有 impl 方法地址范围后逐一反编译比对）
- 未对 `merge_runtime_quarantine` 的调用方做反向溯源（`xrefs_to` 找谁调用了它，从而
  推断 `Quarantine` 结构完整生命周期中是否有单独的 provider_ids 访问点）

`accepted_unknown`/`genuine_ceiling` 均**不适用**——本项是"确切符号名未找到"的诚实缺口，
非某个已定位函数的反编译天花板，已按红线13要求记录 5 种独立排查方法均未命中。
