# interface — get_relay_provider_quota (AiMaMi 1.1.8, windows-x64)

## IPC contract (frontend-confirmed, `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 114)

- **command**: `get_relay_provider_quota`
- **argKeys**: `["providerId"]` — unchanged vs the 1.1.1 baseline (same single string argument)
- **frontend wrapper**: `tauriInvokeWrapper` at `assets/index-CX-I_QAq.js:86`
- **dispatch mechanism**: cmd-string table → owner `sub_140A4EFF0` (0x140A4EFF0, confirmed via
  `xrefs_to` on the cmd-string literal at 0x14136158a — sole xref, single call site 0x140a4f0b9)
  → provider-id table lookup (`sub_14026CC20`) → core multi-provider quota dispatcher
  (`sub_140976010`) → tauri IPC resolve/reject callback (`sub_1407A7610`)
- **owner_va**: `0x140A4EFF0` (PE stripped, no Rust symbol — win binary has zero standalone
  Rust symbols anywhere per this session's windows-x64 owner-map-118.jsonl sub-entry; identity
  resolved via dedicated command-string xref, method=`find_regex_string_pool_hit+xrefs_to_owner=
  dedicated_per_command_wrapper_fn` per `intermediate/aimami/1.1.8/windows-x64/version-delta/
  owner-map-118.jsonl` line 36)
- **1.1.1 baseline**: same command, same argKeys=["providerId"], present at
  `raw/aimami/1.1.1/windows-x64/get_relay_provider_quota/` (owner VA in that build: 0x14093DEB0,
  different binary layout/build, gate_tier=strictImplementationUse_candidate). **1.0.9 baseline**:
  command does NOT exist at all — confirmed via `intermediate/aimami/1.1.8/version-delta/
  frontend-delta/cmd-added.win.txt` line 4 (this command is one of the 15 commands added since
  1.0.9, first introduced sometime in the 1.0.9→1.1.1 window, unchanged content-wise 1.1.1→1.1.8).

## Request DTO

```
{ providerId: string }
```
Single required field, no optional fields, no model/onEvent params for this specific command
(those tokens appear in the shared frontend string-pool blob alongside test_relay_provider_stream's
argKeys but are NOT part of get_relay_provider_quota's own argKeys=["providerId"]).

## Response DTO (provider-family-dependent; two schemas confirmed via decompiled+string-pool evidence)

**OpenAI-style rate-limit schema** (novita/openrouter/siliconflow/deepseek/stepfun/sub2api/newapi
provider families, string literals confirmed via `find_regex`):
`total_available`, `total_granted`, plus (from the 1.1.1 baseline, unchanged string set this round)
`limit`/`hard_limit`/`remaining`/`remaining_requests`/`used`/`used_requests`/`limit_window_seconds`/
`window_seconds`/`period_seconds`/`reset_at`/`resets_at`.

**MiniMax-style schema** (minimaxi.com/minimax.io providers): `base_resp.status_code`,
`base_resp.status_msg`, `model_remains[].model_name`, `current_interval_remaining_percent`
(`Option<f64>`), `current_weekly_status` (`bool`), `current_weekly_remaining_percent`
(`Option<f64>`). Output label string confirmed via `find_regex`: "MiniMax Token Plan 用量"
(0x141362374).

**Sub2API/NewAPI schema** (string-pool confirmed): `total_available`/`total_granted` with the
literal endpoint templates `"Sub2API /v1/usage"` (0x141361a57) and `"/api/usage/token"`
(0x141361a68), plus an error literal `"NewAPI token usage missing total_available"` co-located
with the Novita balance-detail URL in the same packed string object (0x141361aff region) — same
find-regex hit as the 1.1.1 baseline, byte-identical wording.

## Provider routing — 11 providers (unchanged vs 1.1.1, byte-identical URL set confirmed this round)

| discriminant (inferred, positional) | host | quota endpoint (confirmed via `find_regex`) |
|---|---|---|
| 0 | `api.deepseek.com` | (balance endpoint, shared OpenAI-style schema) |
| 1 | `api.stepfun.ai` / `api.stepfun.com` | `https://api.stepfun.com/v1/accounts` (0x141361bb8) |
| 2 | `api.siliconflow.cn` | `sapi.siliconflow.comapi.siliconflow.cn\thttps://` (0x141361f7c) |
| 3 | `api.siliconflow.com` | (same siliconflow packed template) |
| 4 | `openrouter.ai` | `https://openrouter.ai/api/v1/credits` (0x141361ec8) |
| 5 | `api.novita.ai` | `https://api.novita.ai/openapi/v1/billing/balance/detail` (0x141361aff) |
| 6 | `api.moonshot.cn` / `platform.kimi.com` | `https://api.moonshot.cn/v1/users/me/balance` (0x141362094) |
| 7 | `api.moonshot.ai` / `platform.kimi.ai` | `https://api.moonshot.ai/v1/users/me/balance` (0x141362069) |
| 8 | `api.kimi.com/coding` | `https://api.kimi.com/coding/v1/usages` (0x141362158) |
| 9 | `api.minimaxi.com` | `api.minimax.ioapi.minimaxi.com\thttps://` (0x141362228) + `"minimax-coding-plan"` tag (0x141362361) |
| 10 | `api.minimax.io` | (same minimax packed template) |
| 11 (default) | (Sub2API/NewAPI passthrough) | `"Sub2API /v1/usage"` / `"/api/usage/token"` / `" balance/v1/usage"` (0x141361c46) |

All 11+1(default) hosts and every quota-URL literal above were independently re-confirmed this
session via a live `find_regex` string-pool sweep against the 1.1.8 win IDB (45 total matches for
the combined pattern `v1/usage|billing/balance|usage/token|MiniMax|minimax|kimi\.com|siliconflow|
openrouter|novita|deepseek|stepfun|moonshot`) — the set is byte-identical to the 1.1.1 baseline's
documented 11-provider list; no provider added, removed, or URL-changed between 1.1.1 and 1.1.8.

## Error paths

- Provider-id lookup miss (`sub_14026CC20` returns not-found): builds an Err payload via
  `sub_14108F360` + a formatted diagnostic string (owner body, LABEL after the failed-lookup
  branch) — same lookup-miss pattern shared with `activate_relay_provider`/`deactivate_relay_provider`/
  `delete_relay_provider` (this session's other windows-x64 gold-leaf targets).
- HTTP-request failure (`reqwest::Error`, any `Kind` variant): formatted via the library-internal
  `sub_140C068B0` (Display impl) — 7 possible message classes (builder/send/redirect/status/body/
  decode/upgrade), see `pseudocode/0006_reqwest_error_display_sys.c`.
- Generic `Display`-trait failure safety-net: the literal
  `"a Display implementation returned an error unexpectedly"` (0x141363370) — same rustc-emitted
  panic-guard string used by every command's error-serialization path in this binary, not
  quota-specific.

## Side effects

**Network I/O only, no persistence.** Issues exactly one outbound HTTPS GET (per invocation) to the
provider-specific quota endpoint resolved from the routing table above, via `reqwest`
(confirmed by the Display-impl literals and the nested tokio/hyper poll chain in
`pseudocode/0007`/`0008`). No file reads/writes, no process spawn, no persistence-layer calls
observed anywhere in the owner or core-dispatcher call tree. This matches the 1.1.1 baseline's
documented behavior (no persistence, HTTP-only side effect) exactly.

## Delta vs baselines

- **vs 1.0.9**: command did not exist (confirmed via frontend cmd-added delta list) — treated as a
  full "new" reverse-engineering target for the 1.0.9→1.1.8 delta round, not a content diff.
- **vs 1.1.1** (out-of-scope baseline per this round's task, cited only as migration-source
  evidence, not re-claimed as this round's baseline): argKeys unchanged, all 11 provider hosts +
  quota-endpoint URL literals unchanged, MiniMax/OpenAI-style response schemas unchanged, no
  persistence side effect in either build. Owner/core VAs differ (0x14093DEB0→0x140A4EFF0 owner;
  0x1408DBB30→0x140976010 core builder) purely due to recompilation with a newer build — no
  behavioral delta detected this round beyond VA churn and the expected complexity growth
  (591→628 basic blocks, 212→228 cyclomatic complexity, consistent with general command-surface
  growth documented elsewhere this session, e.g. +17% dispatcher size noted in the macOS
  thread-model sub-entry).
