# 前端 leaf 与文案验收状态

本文记录当前仓库对前端 leaf 和全文案验收的真实状态。它不是完成声明，而是防止把静态扫描、key 同步或 draft 清单误报成 100% leaf。

本文只校正前端 leaf 与文案验收口径，不改写项目中用户给出的架构决策原文或重构门禁原文。

## 当前结论

当前仓库不能证明 macOS / Windows 双平台前端已经达到 100% leaf，也不能证明 `src/locales/zh.json` 和 `src/locales/en.json` 的所有用户可见文案已经逐条对照 raw/internal 原文验收。

`evidence/full-chain/internal/frontend-copy-acceptance.json` 当前已经存在，但状态是 `draft`。它列出 660 个 locale key 的逐条验收槽位，并从 raw dumped 主 bundle 中解析 i18n `zh/en translation` 对象。只有 raw translation 对象里的 key/value、显式登记的 raw translation alias，或 raw 默认配置文档中的明确 literal 与当前 locale 精确一致时，才把对应语言标成 accepted；不能把全 JS 字符串扫描命中当作文案来源。

`npm run validate:frontend-dumped` 只证明 raw dumped 的 IPC、service wrapper、module contract、route、query 和 control-flow 已有静态覆盖；它不证明实际全 leaf，也不证明全文案已经逐条验收。`npm run validate:frontend-leaf-copy` 是 MAC/WIN 100% leaf 与全文案完成声明的验收，不是实现启动门槛。

## 当前文案验收数字

- `zh` locale key：660
- `en` locale key：660
- draft entries：660
- raw control-flow key 证据：40
- internal key 提及证据：12
- raw 或 internal key 证据：47
- source-sync-only：613
- raw translation 中文 key 证据：621
- raw translation 英文 key 证据：621
- raw translation 中文 key/value 精确一致：621
- raw translation 英文 key/value 精确一致：621
- raw translation 双语 key/value 同时精确一致：621
- raw translation key 存在但当前文案不一致：0
- zhAccepted：621
- enAccepted：621
- 缺少 raw/internal 文案来源：39

## 已有验证

- `scripts/validate-frontend-dumped.mjs` 验证 raw dumped 的 IPC、service wrapper、module contract、route、query 和 control-flow 静态覆盖；它不是实际全 leaf 或全文案逐条验收的通过证明。
- `scripts/validate-frontend-evidence.mjs` 验证 raw control-flow 中出现的 locale key、route registry、page chunk、query key 和若干 owner gate。
- `scripts/validate-i18n.mjs` 验证 `zh/en` key 同步、源码静态 `t("key")` 覆盖，以及明显乱码、问号和占位质量问题。
- `scripts/generate-frontend-copy-acceptance.mjs` 生成全文案验收 draft；它解析 raw i18n translation 对象，并只接受显式登记的 raw translation alias 与 raw 默认配置 literal，不把普通字符串扫描命中当作 accepted。
- `scripts/validate-frontend-leaf-copy-acceptance.mjs` 对应 `npm run validate:frontend-leaf-copy`，用于验证 MAC/WIN 100% leaf 与全文案完成声明；在 `frontend-copy-acceptance.json` 仍为 draft 时应继续失败，但不阻塞基于 raw/internal 证据、伪代码、owner/interface/DTO 和可测试边界的自主实现。

## 明确缺口

- `full-leaf-100-gap-audit.json` 顶层 `totals.full_leaf_100` 当前仍为 `false`。
- internal gate-report 中仍存在非绿 gate 字段；这些字段只阻塞“raw/internal gate 已通过”“dim6 已恢复”“full_leaf_100 / 100% leaf 已完成”等完成声明。
- 当前 internal frontend 文档缺口信号为 0，但完成声明仍受 gate/audit 非绿字段阻塞。
- `frontend-copy-acceptance.json` 仍是 draft，当前有 621 个 locale key 同时具备 raw translation、raw translation alias 或 raw 默认配置 literal 的中文和英文精确来源，剩余 39 个 locale key 仍缺少完整 raw/internal 文案来源。
- `src/restoration/frontend-manifest/index.ts` 当前未检出非 full leaf 状态；后续如新增 `source-only`、`boundary-only`、`contract-service-only` 或 `owner-closed` 状态，仍不能把它们当作 full leaf 完成声明。

## 完成声明验收

`npm run validate:frontend-leaf-copy` 只有在以下条件全部满足时才能通过：

1. `full-leaf-100-gap-audit.json` 的总 gate 和模块 gate 不再存在 blocker。
2. internal 相关 `gate-report.json` 的 `full_leaf_100`、`gate_accepted` 和 `implementation_use` 不再失败。
3. `leaf-ledger-map.json` 覆盖 macOS 和 Windows leaf。
4. raw frontend control-flow 中出现的 locale key 在 `zh/en` 中同步存在。
5. `src/restoration/frontend-manifest/index.ts` 不再存在非 full leaf 状态，或这些状态被明确排除出 100% leaf 验收范围。
6. `evidence/full-chain/internal/frontend-copy-acceptance.json` 达到 `status: "accepted"`，并且每个 locale key 都有 `zhSource`、`enSource`、`zhAccepted: true` 和 `enAccepted: true`。

在这些条件全部满足前，任何文档、提交说明或 PR 说明都不能写“前端 100% leaf 已完成”。

非绿 gate、`full_leaf_100`、dim6 或 `readyToImplement` 字段不阻塞基于仓库 raw/internal 证据、伪代码、owner/interface/DTO 和可测试边界的自主实现；它们只阻塞“raw/internal gate 已通过”“dim6 已恢复”“full_leaf_100 / 100% leaf 已完成”等完成声明。不得伪造、回写或篡改 `evidence/full-chain/internal` 下的 gate-report 或 audit JSON 来制造已完成状态。
