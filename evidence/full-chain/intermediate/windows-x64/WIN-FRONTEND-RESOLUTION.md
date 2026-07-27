# AiMaMi 1.2.3 Windows 前端提取阻断 — 解阻断结论

session: `win-1.2.3-frontend-extract-20260724`
machine: <host>（写盘目标 SMB ``，backing host = mini）
日期: 2026-07-24
范围: 仅解前端提取阻断（consumerStartReady 前置条件之一），不含后端 full-chain / 门控三档判定 / canonical audits/ 结论包。

## 0. 前置核查

- SMB 挂载核实：`mount | grep internal-history` → `//...@<host>/internal-history on  (smbfs, ...)`，已挂载。
- Skill 加载：`rust-reverse-pipeline`，逐字读 `SKILL.md`（全部 24 条红线）+ `references/flow.md`（step 0-7 全流程）+ `references/rust-reverse-cookbook.md`（1-11 节）+ `internal-reverse/AGENTS.md`（含 RULE 8 骨架白名单）+ `internal-reverse/OUTPUT-SPEC.md`（含 dim1-dim6 定义）。未摘要跳读。
- Claim-first：动手前先在 `internal-reverse/REVERSE-STATUS.md` 追加 in-progress 行（红线12），核对 `INDEX.jsonl` 中 `aimami/1.2.3/windows-x64/*` 96 条既有记录均为 backend pseudocode leaf（`win-1.2.3-app-function-inventory-gapfill-20260724` session 产出），无人认领 frontend/package 目标，无碰撞。完工后已回填终态 DONE 行。

## 1. 问题确认

`raw/aimami/1.2.3/windows-x64/` 下确认**无** `frontend/` 目录、无 `ipc-contracts.jsonl`。同版本 `macos-arm64/frontend/` 则完整（`ipc-contracts.jsonl` + `beautified/*.js`(31 chunk) + `pages/*.md`(6页) + control-flow 等全套）。这导致所有 win 侧模块过不了 `rust-reverse-cookbook.md §1` 角度 B（前端 CCF + invoke 命令名 diff，要求 `true_gaps=0`），进而卡在 `consumerStartReady` 之前。

## 2. 同源假说裁决（mac frontend bundle 是否平台无关可复用）

**结论：不采用复用路径，且此点在本 skill 规则体系下并非需要负责人临场拍板的"开放冲突"，而是已有的、多处独立重申的明文禁止条款。**

三处独立文本证据（均已逐字读到，非转述）：

1. `SKILL.md` 红线 8：「平台证据必须由对应平台生产（`windows-x64/` 证据不能由转换 macOS 证据获得）」。
2. `internal-reverse/AGENTS.md`：
   - 「artifact/platform 没拿到的状态保持 `Unknown`，禁止用 macOS 证据外推 Windows，反之亦然。」（目录边界章节）
   - 「同平台 platform gate：macOS 只证明 macOS，Windows 只证明 Windows；……禁止用 macOS 证据外推 Windows。」（必填内容 · full_leaf_100_definition_v2 前置章节）
   - 「不用某平台 artifact 结果推断另一个平台。」（禁止项）
3. `internal-reverse/OUTPUT-SPEC.md` **dim5**（`full_leaf_100_definition_v2` 六维之一，正式定义）：「同平台 platform gate：macOS 与 Windows 独立闭合；Windows 必须有同版本同平台 evidence，且必须输出相对 macOS 的 platform 差异，供源码级平台差异实现使用，**禁止用 macOS 证据外推 Windows**。」同时 `task-plan.json` schema 里有机器可读字段坐实此规则：
   ```json
   "platformPolicy": { "windowsIndependent": true, "doNotInferWindowsFromMacOS": true }
   ```

这三处文本互相独立、互相印证、无一处开口子允许"Tauri bundle 跨平台字节一致因此可复用"这类例外。规则的立足点不是"内容是否可能相同"（这属于事实概率判断），而是**认识论层面的证据溯源要求**：Windows 结论必须有 Windows 自己生产的证据，不接受"大概率相同所以外推"的论证方式，因为一旦开这个口子，未来任何平台差异（哪怕只有一处）都会被这套"同源假说"悄悄掩盖而不会被发现。

**因此本轮未把这个问题升级给负责人做临场判断**——不是因为它不重要，而是因为 spec 已经对这个具体问题给出了明确、非模糊、多处重复的书面答案，升级请求本身没有可裁决的空间（除非负责人想明确修改 SKILL.md/OUTPUT-SPEC.md 本身，而红线 2 要求改这些规则文件需要用户本轮明确确认，本任务未收到此类指令）。

**事后验证性旁证（非复用依据，不影响上述裁决）**：待第 3 节独立产出 win 侧证据后，逐一 diff 发现 mac 131 个 IPC 命令与 win 131 个 IPC 命令**完全一致（zero diff）**，且资产文件名（含 Vite content-hash 后缀，如 `voice-page-CV7DqakD.js`）逐一相同——经验上证实两端确系同一次前端构建产物内嵌进两个平台的可执行文件。但这只是"复用假说为真"的事后确认，不代表可以把这次确认反向用作下次的复用依据；dim5 要求的是**每个版本都独立证明**，不能把"上次验证过相同"当成"以后可以不验证"的许可。

## 3. 解阻断路径：从 Windows 二进制直接提取（未走 NSIS installer）

按 `flow.md §2` Windows 分支尝试 `extract_windows_package.py --installer <exe> --out <path>`，首次运行报告 `gaps: ["no extracted candidate app PE binary found", "no extracted frontend asset directory found"]`。

根因排查：`raw/binary/AiMaMi.1.2.3 win64.exe`（PE32+ x86-64 GUI, 33,667,584 bytes, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`）**本身就是已安装的单文件 Tauri app exe，不是 NSIS installer**。用 `7zz` 把它当通用 archive 解包，只能解出 `.reloc`/`.rdata` 等 PE 节区（14 个文件），提取不出内层 app exe，脚本因此判定"无 candidateAppBinaries / frontendCandidates"——这是文件角色识别问题，不是前端资产真的不存在。

改为对该 exe **直接**运行 `tauri-dumper --input <exe> --output <dir>`（不经过 installer 解包这一步），成功扫描出 **34 个前端 asset**：`index.html` + 29 个 JS chunk + 1 个 CSS（`index-CR8sKgfr.css`）+ 1 张 PNG（`woyao-pro-DqsTB8HE.png`）。

随后按 `flow.md §2` 标准工具链跑完前端全量提取：

```
python3 extract_frontend_contracts.py --prefer-recovered-source \
  --frontend <tauri-dumped-assets/direct> \
  --out raw/aimami/1.2.3/windows-x64/frontend
node extract_frontend_ast.mjs <tauri-dumped-assets/direct> \
  raw/aimami/1.2.3/windows-x64/frontend/ast-facts.json \
  raw/aimami/1.2.3/windows-x64/frontend/frontend-control-flow.jsonl
```

（`extract_frontend_ast.mjs` 首次因本机 skill 目录缺 `@babel/parser`/`@babel/traverse` 报错；`npm install`（skill 根目录已有 `package.json` 声明这两个依赖）后重跑成功——环境依赖缺失，与 mac/win 证据问题无关。）

产出（`raw/aimami/1.2.3/windows-x64/frontend/`）：

| 文件 | 内容 |
|---|---|
| `ipc-contracts.jsonl` | 131 行 / 131 唯一 command（真实 win 侧 `invoke()` 调用点） |
| `frontend-control-flow.jsonl` | 248 行，`frontend-control-flow-unresolved.jsonl` 0 行 |
| `ast-facts.json` | 1.87MB，全量 AST 事实 |
| `frontend-contract-report.md` / `http-hits.jsonl` / `query-hits.jsonl` / `router-hits.jsonl` / `frontend-files.txt` | 标准配套产物 |

角度 B（前端 CCF + invoke 命令名 diff）现在可以正常对 win 侧跑，`true_gaps` 可计算，不再因证据完全缺失而全卡。

## 4. 证据登记

- `internal-reverse/REVERSE-STATUS.md`：已追加 claim-first in-progress 行，完工后回填 DONE 行（含根因、裁决理由、产出清单）。
- 根 `INDEX.jsonl`：已追加一行 `key=aimami/1.2.3/windows-x64/frontend/ipc-contracts-and-control-flow`（`kind=frontend_ipc_contracts_and_control_flow`），append-only，未改动既有 96 条 backend leaf 记录。
- 本文件路径：`intermediate/aimami/1.2.3/windows-x64/WIN-FRONTEND-RESOLUTION.md`（按任务要求的固定路径）。

## 5. 未解决 / 下一步（不在本轮范围内）

- 本轮**未**产出 `internal-reverse/audits/windows-1.2.3-<module>/` canonical 结论包，**未**跑门控三档判定（`consumerStartReady`/`strictImplementationUse`/`readyToImplement`），**未**声明任何 leaf 为 `full_leaf_100`。前端证据只是六维（dim1-dim6）中 dim1 的输入之一，dim5（同平台独立闭合）现在对 frontend 层已满足，但 dim2/dim3/dim4/dim6（后端 owner/call-tree/interface/acceptance）仍需按既有 `win-1.2.3-app-function-inventory-gapfill-20260724` 等 session 的后端 raw 证据分别 reduce。
- 若后续 full-app 深逆要消费本次前端证据，需新开 session claim（不复用本 session）。

## 6. 需要负责人拍板的点

**无。** 本轮遇到的"同源假说 vs OUTPUT-SPEC dim5"这一潜在冲突，经核实是 spec 已有的、无歧义、三处独立重复的明文禁止条款，不存在需要临场裁决的开放空间；已按 spec 直接走独立 win 提取路径解决，未采用 mac 证据外推。若负责人希望未来允许"Tauri bundle 跨平台字节一致故可复用"这类例外，需要的是**修改 SKILL.md 红线8 / AGENTS.md / OUTPUT-SPEC.md dim5 本身**（红线2：规则文件默认锁定，需用户本轮明确确认才能编辑），这是一个独立的、更大范围的规则变更决策，不是本轮"解阻断"任务的一部分，故未擅自处理，仅在此提请知悉。
