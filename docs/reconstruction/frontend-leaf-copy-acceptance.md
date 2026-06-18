# 前端 leaf 与文案验收状态

本文记录当前仓库对前端 leaf 和全文案验收的真实状态。它不是完成声明，而是防止把静态扫描、key 同步或 draft 清单误报成 100% leaf。

本文只校正前端 leaf 与文案验收口径，不改写项目中用户给出的架构决策原文或重构门禁原文。

## 当前结论

当前仓库仍不能证明 macOS / Windows 双平台前端已经达到 100% leaf，因为 internal gate/audit 中仍存在非绿完成声明字段。但 `src/locales/zh.json` 和 `src/locales/en.json` 的用户可见文案已经进入逐条验收清单，当前清单可证明 666 个 locale key 都有可追踪来源或实现可重建来源。

`evidence/full-chain/internal/frontend-copy-acceptance.json` 当前已经存在，状态是 `accepted`。它列出 666 个 locale key 的逐条验收槽位，并区分四类来源：raw translation object、raw literal、raw translation alias、implementation-reconstructable。implementation-reconstructable 只用于 time formatter、relay mock、router error、custom-instruction templates、tray current-source 边界等已经收口到当前 owner、验证脚本和 raw/internal 模块证据的文案；它不是把 raw 翻译对象伪装成存在。

`npm run validate:frontend-dumped` 只证明 raw dumped 的 IPC、service wrapper、module contract、route、query 和 control-flow 已有静态覆盖；它不证明实际全 leaf。`npm run validate:frontend-leaf-copy` 现在验证 locale/copy owner/manifest/docs 侧的可实现验收，并把历史 gate/audit 非绿字段输出为 INFO；它不再阻塞基于 raw/internal 证据、伪代码、owner/interface/DTO 和可测试边界的自主实现。

## 当前文案验收数字

- `zh` locale key：666
- `en` locale key：666
- acceptance entries：666
- raw control-flow key 证据：40
- internal key 提及证据：12
- raw 或 internal key 证据：47
- source-sync-only：619
- copy evidence 中文 key 证据：666
- copy evidence 英文 key 证据：666
- copy evidence 中文 key/value 精确一致：666
- copy evidence 英文 key/value 精确一致：666
- copy evidence 双语 key/value 同时精确一致：666
- copy evidence key 存在但当前文案不一致：0
- zhAccepted：666
- enAccepted：666
- 缺少文案来源：0
- raw translation object：607
- raw literal：9
- raw translation alias：6
- implementation-reconstructable：44

## 已有验证

- `scripts/validate-frontend-dumped.mjs` 验证 raw dumped 的 IPC、service wrapper、module contract、route、query 和 control-flow 静态覆盖；它不是实际全 leaf 或全文案逐条验收的通过证明。
- `scripts/validate-frontend-evidence.mjs` 验证 raw control-flow 中出现的 locale key、route registry、page chunk、query key 和若干 owner gate。
- `scripts/validate-i18n.mjs` 验证 `zh/en` key 同步、源码静态 `t("key")` 覆盖，以及明显乱码、问号和占位质量问题。
- `scripts/generate-frontend-copy-acceptance.mjs` 生成全文案验收清单；它解析 raw i18n translation 对象，接受显式登记的 raw translation alias、raw literal，以及由当前模块 owner、验证脚本和 raw/internal 模块证据共同支撑的 implementation-reconstructable 文案。
- `scripts/validate-frontend-leaf-copy-acceptance.mjs` 对应 `npm run validate:frontend-leaf-copy`，用于验证 locale/copy owner/manifest/docs 侧的可实现验收；历史 gate/audit 非绿字段只作为 INFO 输出，不阻塞继续实现。

## 明确缺口

- `full-leaf-100-gap-audit.json` 顶层 `totals.full_leaf_100` 当前仍为 `false`。
- internal gate-report 中仍存在非绿 gate 字段；这些字段只阻塞“raw/internal gate 已通过”“dim6 已恢复”“full_leaf_100 / 100% leaf 已完成”等完成声明。
- 当前 internal frontend 文档缺口信号为 0，但完成声明仍受 gate/audit 非绿字段阻塞。
- `frontend-copy-acceptance.json` 已达到 `status: "accepted"`，当前 666 个 locale key 都有 `zhSource`、`enSource`、`zhAccepted: true` 和 `enAccepted: true`。
- `src/restoration/frontend-manifest/index.ts` 当前未检出非 full leaf 状态；后续如新增 `source-only`、`boundary-only`、`contract-service-only` 或 `owner-closed` 状态，仍不能把它们当作 full leaf 完成声明。

## 完成声明验收

最终“前端 100% leaf 已完成”声明只有在以下条件全部满足时才能写入 README、提交说明或 PR 说明：

1. `full-leaf-100-gap-audit.json` 的总 gate 和模块 gate 不再存在 blocker。
2. internal 相关 `gate-report.json` 的 `full_leaf_100`、`gate_accepted` 和 `implementation_use` 不再失败。
3. `leaf-ledger-map.json` 覆盖 macOS 和 Windows leaf。
4. raw frontend control-flow 中出现的 locale key 在 `zh/en` 中同步存在。
5. `src/restoration/frontend-manifest/index.ts` 不再存在非 full leaf 状态，或这些状态被明确排除出 100% leaf 验收范围。
6. `evidence/full-chain/internal/frontend-copy-acceptance.json` 达到 `status: "accepted"`，并且每个 locale key 都有 `zhSource`、`enSource`、`zhAccepted: true` 和 `enAccepted: true`。

在这些条件全部满足前，任何文档、提交说明或 PR 说明都不能写“前端 100% leaf 已完成”。

非绿 gate、`full_leaf_100`、dim6 或 `readyToImplement` 字段不阻塞基于仓库 raw/internal 证据、伪代码、owner/interface/DTO 和可测试边界的自主实现；它们只阻塞“raw/internal gate 已通过”“dim6 已恢复”“full_leaf_100 / 100% leaf 已完成”等完成声明。不得伪造、回写或篡改 `evidence/full-chain/internal` 下的 gate-report 或 audit JSON 来制造已完成状态。
