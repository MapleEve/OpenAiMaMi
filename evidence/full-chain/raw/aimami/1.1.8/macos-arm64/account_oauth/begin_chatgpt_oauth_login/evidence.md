# evidence — begin_chatgpt_oauth_login (AiMaMi 1.1.8, macos-arm64 label)

session: <审计会话> · machine: <本地机器>
owner_va: 0x1000a2e40 · owner_symbol: `codexmate_lib::commands::account_oauth::begin_chatgpt_oauth_login::{{closure}}::h20c37487e18fb179`
source: `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 3 (angle A, func_query)
binary: `raw/binary/AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi` — 分析工具就绪门
(`健康检查`: status=ok, uptime_sec=207577.4, 反编译就绪=true, module=`AiMaMi`, idb_path contains
`AiMaMi 1.1.8 universal.app`) before any decompile/callees/xrefs_to/find_regex call this round.

**arch_noise_filter_applied**: this mac 1.1.8 IDB decompiles the fat binary's x86_64 slice (documented
session-wide in `REVERSE-STATUS.md` mac-shard-3/8 sub-entry, orchestrator directive: compare at
app/Rust-semantic level only). All findings below are demangled-symbol / literal / control-flow level;
no register/ABI/calling-convention/arch-string noise is asserted as a behavioral delta.

## Confirmed

- `begin_chatgpt_oauth_login` is a real `#[tauri::command]` async closure at VA 0x1000a2e40, confirmed
  reachable from `tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}` via
  `xrefs_to` (call site 0x10014fc08) — this is a live, dispatcher-wired IPC endpoint, not dead code.
- It calls `codexmate_lib::core::oauth_login::generate_pkce` (0x1003cdd30, full decompile, no bail) which
  generates two v4 UUIDs, concatenates them as the PKCE `code_verifier`, and computes
  `code_challenge = base64url(sha256(code_verifier))` — real SHA-256 (FIPS-180-4 IV constants
  byte-exact) and real base64 engine calls, not fabricated.
- It calls `codexmate_lib::core::oauth_login::build_authorize_url` (0x1003ce220, full decompile, no bail)
  which renders `https://auth.openai.com/oauth/authorize` with 10 query params confirmed by cross-
  referencing `find_regex` string-pool hits at 0x1012c2356 against matching literal byte-lengths in the
  9 `form_urlencoded::append_pair` call sites: `response_type=code`,
  `client_id=app_EMoamEEZ73f0CkXaXp7hrann`, `redirect_uri=http://localhost:1455/auth/callback`,
  `scope=openid profile email offline_access`, `code_challenge=<dynamic>`,
  `code_challenge_method=S256`, `id_token_add_organizations`, `codex_cli_simplified_flow`,
  `originator=codex_cli_rs` (literal `"codex_cli_rs"` inline in the disassembly, not string-pool
  inferred), `state=<dynamic>`.
- It calls `tokio::net::tcp::listener::TcpListener::bind_addr` (0x100f3df40, full decompile) →
  `mio::net::tcp::listener::TcpListener::bind` (0x100f54040, full decompile) → real libc `socket()`/
  `setsockopt()`/`bind()`/`listen()` symbol refs (0x1011307da/0x1011309a2/0x101130c24), terminating the
  call tree at the kernel syscall boundary (`terminated_reason=external_call`) — confirms a local
  callback listener is bound, consistent with `redirect_uri=http://localhost:1455/auth/callback`.
- It references a `Mutex`-guarded global singleton (`OAUTH_CANCEL` static at 0x1015b1ac0 + adjacent byte
  flag at 0x1015b1ac8) and a `tokio::sync::oneshot::State::set_complete` call — consistent with the
  frontend's own `if(a) return;` re-entrancy guard at `accounts-page-*.js:80` and with the existence of a
  sibling `cancel_chatgpt_oauth_login` command in the same 1.1.8 frontend command surface.
- Frontend IPC contract confirms `argKeys=[]` (void command) — `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 13.

## Inferred

- The response type is a `Result<String, Error>` yielding the rendered authorize URL, based on
  `build_authorize_url`'s return value flowing back through the owner to
  `respond_async_serialized_inner` — the concrete Rust struct/enum name was not independently confirmed
  via `type_query`/`declare_type` this round.
- The actual token-exchange POST to `https://auth.openai.com/oauth/token` (string-pool confirmed at
  0x1012c24e4, with `grant_type=authorization_code`/`code_verifier`/`User-Agent: AiMaMi/1.1.8`) is
  presumed to execute inside the local callback listener's accept-handler once a redirect is received —
  that accept-handler is a separate function not reached by this owner's direct callee walk and was not
  decompiled this round.
- `a2`/`a3`/`a4`/`a5` parameters into `build_authorize_url` (feeding `id_token_add_organizations`,
  `codex_cli_simplified_flow`, and `state`) are caller-supplied from within the owner's async body;
  their exact origin (hardcoded flags vs. config-derived) was not traced past the call-site arguments.

## Unknown

- Whether `id_token_add_organizations` and `codex_cli_simplified_flow` are hardcoded `true`/enabled or
  conditionally derived (e.g. from a feature flag or account-type check) — not traced; recorded Unknown
  rather than guessed.
- The exact response DTO field name(s) (e.g. `{ authorizeUrl: string }` vs. bare `String`) as seen by the
  frontend caller — the frontend call site (`accounts-page-*.js:80`) does not consume/destructure the
  resolved value in the extracted snippet, so the shape is Unknown from the frontend side too.
- Persistence of the resulting tokens (where/how `access_token`/`refresh_token`/`chatgpt_account_id` get
  written to `auth.json` or similar) is out of scope for this owner and Unknown at this leaf — likely
  handled by a separate command/callback-completion path, not reached by this call tree.
- Whether the accept-handler for the 127.0.0.1:1455 listener is spawned by this same owner closure
  (elsewhere in the untranscribed portion of the 307-basic-block body) or by a sibling task — not
  independently confirmed; the `oneshot::State::set_complete` call suggests a completion signal crosses
  a task boundary, but the spawning site was not located this round.

## Delta vs 1.0.9 baseline

`begin_chatgpt_oauth_login` and `cancel_chatgpt_oauth_login` are both **new in 1.1.8** — confirmed absent
from the 1.0.9 mac frontend command surface via
`intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-added.mac.txt` (lines 1-2). No 1.0.9 raw
leaf exists for either command (`find ... -iname "*oauth_login*"` under `raw/aimami/1.0.9` returns zero
hits) — this is a `gap_needs_new_raw` target, not a regression-diff target, so there is no baseline body
to compare against; this evidence file is itself the first-ever leaf for this command.

The closest 1.0.9 analogue, `import_chatgpt_session_account` (session-cookie import — the user pastes an
existing ChatGPT web session into AiMaMi), was **removed** in 1.1.8
(`intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-removed.mac.txt` line 4). Taken together,
this is a genuine product-level architecture change: 1.1.8 replaced the 1.0.9 session-cookie-import
account-linking method with a proper OAuth 2.0 + PKCE authorization-code flow that mirrors OpenAI's own
public Codex CLI login flow (same `auth.openai.com` endpoints, same public client id, same
`originator=codex_cli_rs` flow-selection convention) rather than inventing a new proprietary protocol.
