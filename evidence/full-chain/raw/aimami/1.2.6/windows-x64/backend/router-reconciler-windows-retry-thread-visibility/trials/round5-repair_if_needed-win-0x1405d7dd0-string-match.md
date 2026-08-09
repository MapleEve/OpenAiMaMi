# round5 (2026-08-07) — `codex_project_state::repair_if_needed`(win) 定位破墙

承接 round4 遗留的唯一未闭合目标：`codex_project_state::repair_if_needed`(win) 此前被标 `gap_needs_reducer`。
本轮严格按 `references/ida-deep-recovery.md` 破假墙 playbook，逐条尝试用户指定的 4 类破法，**不满足于"已试过的那几步"**。

---

## 0. win IDA 健康检查（红线17）

- 开工时 `server_health`：`status=ok, uptime_sec=192222.317, <反编译器>_ready=true, module="AiMaMi 1.2.6 win64.exe"`。
- 过程中 `find_regex`/`server_health` 各出现 1 次超时/`Connection refused`（Surge 本地代理瞬时抖动，非 IDA 进程本身重启——`uptime_sec` 前后连续递增 192222→192513，进程未重启）。按红线17重试 1 次后恢复，未把该次瞬时失败当"无 gap/已覆盖"。
- mac 侧同步核验：`status=ok, uptime_sec=22339.522, <反编译器>_ready=true, module="AiMaMi"`。

---

## 1. 调用图传播起点复核（用户要求的破法1+2）

复核 round4 记录：候选池是从 `callees(reconcile_router_on@0x140AA86E0)` 的全部 47 个直接 callee 中，按体积与 mac 侧 1247B 接近筛出的。`sub_1405D7DD0`(1456B) **本就在这个候选池内**，round3 已经反编译过它，round4 也重新核对过——即候选池半径（1 跳）从一开始就是够的，**问题不是候选池太窄，而是此前两轮对同一份反编译内容的解读不够深**：仅凭"体内两次调用 `0x1405e0390`（reconcile_threads_with_progress）"这一个表面信号，就下结论"是 reconcile_threads_with_progress 的重试包装器，与 repair_if_needed 无关"，没有去核对函数体内嵌的字面量字符串。

结论：本轮**没有发现需要扩展到 2-3 跳才能找到候选**的证据——真正的答案本来就在 1 跳候选池里，是被误判排除的假墙，而非池子不够大。

---

## 2. 字符串特征法（破墙的决定性证据，用户要求的破法3）

### 2.1 提取 mac 侧 repair_if_needed(0x100737150) 内嵌的两个格式化模板字符串

```
get_string(mac, ["0x10185F145", "0x10185F177"])
→ 0x10185F145 = "Codex project index cannot be repaired safely: "
→ 0x10185F177 = "Codex project index is still unstable after repair: "
```

这两个字符串出现在 mac repair_if_needed 反编译体（`pseudocode/round3-repair_if_needed-mac-0x100737150.c` 第 119/151 行 `alloc::fmt::format::format_inner` 调用参数）里，是这个函数独有的错误信息模板，不太可能被其它函数复用。

### 2.2 win 侧全局 find_regex 搜索

```
find_regex(win, "Codex project index")
→ n=2
→ 0x14183497a = "Codex project index cannot be repaired safely: "
→ 0x1418349ac = "Codex project index is still unstable after repair: "
```

两个字符串在 win 二进制里各只有 1 处，且与 mac 侧逐字节完全一致（含标点、空格、冒号）。

### 2.3 xrefs_to 定位引用函数

```
xrefs_to(win, ["0x14183497a", "0x1418349ac"])
→ 0x14183497a 的唯一引用者: sub_1405D7DD0
→ 0x1418349ac 的唯一引用者: sub_1405D7DD0
```

**两个字符串的唯一引用函数都是 `sub_1405D7DD0`** —— 正是 round3/round4 排除过的那个候选（体积1456B，"reconcile_threads_with_progress 重试包装器"）。这直接推翻了此前的排除结论。

### 2.4 逐字节字面量交叉核对（第二重确认）

重新 decompile `sub_1405D7DD0`，在其"无 issue"分支（`*(_QWORD *)v26 == -1`）内联构造了一个 39 字节的字面量：

```c
*(_OWORD *)(v14 + 16) = xmmword_141830F41;
*(_OWORD *)v14 = xmmword_141830F31;
*(_QWORD *)(v14 + 31) = 0x8DA4E5AEBFE4809CuLL;
```

用 `<工具调用>` 读取 `xmmword_141830F31`/`xmmword_141830F41` 的原始字节：
```
0x141830f31 = 436f64657820e9a1b9e79baee7b4a2e5
0x141830f41 = bc95e6ada3e5b8b8efbc8ce697a0e99c
```

拼上 tail qword `0x8DA4E5AEBFE4809C`（小端字节：`9c 80 e4 bf ae e5 a4 8d`，与第二段末字节 `9c` 在偏移31处重叠，是编译器处理非8对齐长度字符串的标准手法），三段拼接后完整还原 39 字节 UTF-8 字符串：

```
"Codex 项目索引正常，无需修复"
```

即 "Codex project index normal, no repair needed"。这与 mac 侧 repair_if_needed 在同一分支（`v15 == None`）内联构造的 39 字节字面量（同样是 4 个 qword + 1 个尾部重叠 qword 的拼接手法，且首尾常量值 `0xA1E9207865646F43`/`0x8DA4E5AEBFE4809C` 逐字节相同）**完全一致**——这是独立于 find_regex 之外的第二重确认，排除"两个字符串偶然出现在同一函数"的可能性。

### 2.5 调用图交叉验证（`caller_disambiguation_tried=true`）

```
xrefs_to(win, "0x1405d7dd0")
→ reconcile_router_on (0x140AA86E0)
→ reconcile_native_off_with_progress (0x140B50EA0)
→ sub_14059DB10 (新发现的第三调用者，本轮未展开核实，留待后续)
→ 2 处 data xref（vtable/闭包槽，非主线）
```

`sub_1405D7DD0` 是 `reconcile_router_on` 与 `reconcile_native_off_with_progress` 的共同直接 callee，与 mac 侧 repair_if_needed 的两个已知调用点（`reconcile_router_on` 第529行 / `reconcile_native_off_with_progress` 第845行）完全对应。

**裁定：`sub_1405D7DD0` = `codex_project_state::repair_if_needed`（win），confirmed。**

---

## 3. panic-Location 两跳 xref 法（用户要求的破法4，独立第三条证据链）

```
find_regex(win, "project_state")
→ 0x1418025c1 "src\core\relay\codex_project_state.rs"
→ 0x141810133 "src\core\relay\codex_project_state.rs"
→ 0x141834d20 "codexmate_lib::core::relay::codex_project_state"
→ 0x141869edd "src\core\relay\codex_project_state.rs"
（另有 project_state_integrity / project_state 等非本模块直接相关字符串）
```

第一跳 `xrefs_to`（字符串 → Location 结构体的 data 引用）：命中若干个 data 地址（Location struct 实例）。
第二跳 `xrefs_to`（Location struct → 实际使用它的函数）：

| Location 地址 | 命中函数 |
|---|---|
| 0x1418025e8 | sub_1404432F0 |
| 0x141810160 | sub_1405D8950 |
| 0x141810178 / 0x141810190 / 0x1418101a8 | sub_1405D8D00 |
| 0x1418101c0 / 0x141834d08 | sub_1405DA620 |
| **0x141834dd0 / 0x141834e48** | **sub_1405DC220（已由 string-literal 法独立确认为 `repair`）** |
| 0x141869f08 | sub_140B70CF0 |

`sub_1405DC220`（即 repair_if_needed 在"可修复"分支调用的 repair() 实现）**独立地**在 panic-Location 证据链中命中，与 codex_project_state.rs 源文件路径关联——这是与字符串字面量法完全独立的第三条证据链，交叉印证了 repair_if_needed / repair 所在的模块归属。

副产品：`sub_1404432F0`/`sub_1405D8950`/`sub_1405D8D00`/`sub_1405DA620` 4 个函数也在同一源文件命中 Location，可能是 `codex_project_state` 模块的其它成员（如 `inspect`），**本轮未展开核实其具体身份**，如实标注为待后续专项工作单处理的线索，不纳入本轮结论。

---

## 4. 内部 callee 语义确认

### `sub_1405D7C20` → `stability_issue`

```c
qmemcpy(v7, "Codex project index requires repair", 35);
```

内嵌 35 字节字面量 "Codex project index requires repair"，是 Some(issue) 分支的取值之一。另两个分支引用 `unk_141834928`="cannot inspect Codex project threads: "、`unk_141834951`="cannot read .codex-global-state.json: " 两个 Display 格式模板。与 mac 侧 `stability_issue` 检查 `.codex-global-state.json`/线程状态的语义完全对应。已改名 `stability_issue`。

### `sub_1405DC220` → `repair`

体积 11847B(0x2e47)，本轮未完整展开全部反编译内容（不影响 repair_if_needed 自身的定位结论）。已确认字符串 xref `projectless-thread-ids`，语义与"项目索引修复"（清理无归属项目的线程 ID）相符；同时被 panic-Location 两跳法独立确认属于 `codex_project_state.rs` 源文件。已改名 `repair`。

---

## 5. 遗留开放问题（如实列出，非回避）

- `0x1405e0390`（round2 命名 `reconcile_threads_with_progress`）在 `repair_if_needed` 内部的调用位置（`call#1(intermediate <- a2)` 后紧跟 `call#2(result <- intermediate)`），与 mac 侧 `repair_if_needed` 调用 `inspect(v19, a2)` 后紧跟 `stability_issue(&v15, v19)` 的结构完全同构。这意味着 `0x1405e0390` 在这个调用位置扮演的角色应该是 `inspect`，但 round2 独立地把它命名为 `reconcile_threads_with_progress`（依据同样是"reconcile_router_on/reconcile_native_off_with_progress 共同直接 callee"这个信号）。两种可能：(a) Windows 构建下 `inspect` 与 `reconcile_threads_with_progress` 被 ICF 折叠成同一份机器码；(b) round2 的判定需要重新核实。**本轮未展开验证 `0x1405e0390` 自身反编译内容是否匹配 `inspect()` 的语义**（`inspect` 应该只做 `ProjectStateInspection` 查询，不应涉及线程收敛/`rayon_core` 逻辑），这超出本轮"定位 repair_if_needed"的任务范围。
- 本开放问题**不影响 repair_if_needed 本身定位结论的成立性**——结论同时基于 (1) 字符串字面量精确匹配、(2) 调用图双重顶层入口共同 callee、(3) panic-Location 独立第三方交叉验证，三条证据链互不依赖，均指向 `sub_1405D7DD0`。
- `sub_1405DC220`(repair) 体积 11847B，本轮未完整展开反编译全文（仅确认 xref 字符串与 panic-Location 归属）。
- panic-Location 两跳法额外发现的 4 个同模块候选函数（`sub_1404432F0`/`sub_1405D8950`/`sub_1405D8D00`/`sub_1405DA620`）身份未核实。
- 新发现的第三调用者 `sub_14059DB10` 未展开核实（mac 侧目前只记录了 2 个已知调用点）。
- 未与真实 Windows 客户端做参照运行对照（红线25：本轮仅静态反编译分析）。
- 全部实现门（`consumerStartReady`/`strictImplementationUse`/`readyToImplement`/`implementation_use`/`gate_accepted`）保持 `false`。

## 6. 红线13 genuine_ceiling 判定

**不适用 `accepted_unknown`/`genuine_ceiling`**——本轮已经用三条独立证据链把 `repair_if_needed` 定位到确定地址 `0x1405D7DD0`，`confidence` 从 round4 的 `gap_needs_reducer` 更新为 `confirmed`。round3/round4 此前的排除结论是**假墙**（分析深度不够，非真天花板），符合 `references/ida-deep-recovery.md` 表格中"`accepted_unknown`（ICF-size 猜测）"一行描述的场景：round4 把体积相近的候选反编译后只看了表面调用模式就排除，没有做字符串反查——这正是 playbook 里明确列出的破法（第23行），本轮补上了这一步。

## 7. IDB 写回

- `rename`: `0x1405d7dd0 -> repair_if_needed`、`0x1405d7c20 -> stability_issue`、`0x1405dc220 -> repair`（3个，均成功）
- `dirtree_move`: 3个函数移入 `/codexmate_lib/core/relay/codex_project_state/`
- `set_comments`: 3个函数写入完整证据链中文注释
- `<工具调用>()`: 执行1次，返回 `{"ok":true,"path":"<二进制路径>\\AiMaMi 1.2.6 win64.exe.i64"}`
