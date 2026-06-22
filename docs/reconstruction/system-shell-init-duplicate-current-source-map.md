# system-shell-init 非权威 outtake 当前源码映射

本文只登记 `system-shell-init-duplicate-outtake-non-authoritative` 这条 current-source partial closeout 的证据边界。它不是 authoritative closeout，不关闭任何 raw/internal gate，不声明 `readyToImplement`、`implementation_use`、`gate_accepted`、`full_leaf` 或 `full_leaf_100` 已完成。

## 证据来源

| 来源 | 边界 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/frontend-callchain-report.json` | 只记录 `duplicate_local_outtake_not_authoritative` 本地重复 outtake 标记，并明确不是 authoritative closeout。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/gate-report.json` | 保留 `duplicate_local_outtake_not_authoritative`、`authoritative_shared_bootstrap_work_exists` 和 `duplicate_scope_not_checked_before_write`；字段仍为非绿。 |
| `docs/reconstruction/system-snapshot-bootstrap-current-source-map.md` | authoritative bootstrap work 的公开源码 owner 继续由 snapshot/bootstrap map 承载；本文不替代 bootstrap map。 |
| `docs/reconstruction/frontend-current-source-closeouts.json` | 只把该非权威 outtake 登记为 current-source partial closeout，并保留非完成声明。 |

## 不声明边界

- 不修改任何 gate-report 字段。
- 不把 `duplicate_local_outtake_not_authoritative` 当作 authoritative closeout。
- 不登记 `full_leaf_100` 或 `moduleExitAllowed` 为已恢复。
- 不声明 `readyToImplement`、`implementation_use` 或 `gate_accepted` 已恢复。
- 不处理 relay、mystery 或 voice。

## 验证入口

- `scripts/validate-frontend-current-source-closeouts.mjs` 直接验证 closeout 台账、非权威 outtake 证据、gate-report 残留字段、本文 map 绑定和不声明边界。
- `scripts/validate-frontend-closeout-map-bindings.mjs` 直接验证本文已被 closeout map 绑定台账覆盖。
- `npm run validate:frontend-closeouts` 与 `npm run validate:frontend-closeout-map-bindings` 用于单独验收。
