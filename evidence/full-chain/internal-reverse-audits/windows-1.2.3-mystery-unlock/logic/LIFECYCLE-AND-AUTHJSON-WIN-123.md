# Lifecycle + auth.json structure + data flow — windows-x64 1.2.3 (understand-only, not an implementation recipe)

Scope note: this document exists to satisfy the task's requested "logic 生命周期+auth.json结构+数据流向" deliverable for the merge/consolidation pass. Because the underlying cluster is classified `tos_circumvention` (see TOS-CLASSIFICATION.md), this document deliberately stays at **behavioral/architectural description**, not a field-by-field construction recipe — consistent with the OUTPUT-SPEC handling already established by the macOS sibling package for the same cluster. It is NOT to be used as `logic/` in the implementation-basis sense (no `implementation_use` claim is made anywhere in this bundle).

## 1. Lifecycle (Windows-confirmed)

State is tracked via two on-disk artifacts at a Codex-native-auth-adjacent location: a **marker file** (records "we installed a placeholder credential") and a **backup file** (the real credential, if any, saved before overwrite). The 4-value state (0=NoFile/1=PlaceholderActive/2=RealPresent/3=Corrupt — Windows-observed via `cleanup`'s switch on the return of `sub_14048ED60`, matching the macOS-documented `live_auth_state` semantics) drives branching in both `install_virtual_unlock_auth` and `cleanup`:

- **Install path** (`install_virtual_unlock_auth`, 0x1404949c0): checks current auth state; if no usable real login exists (and, per a `force` flag `a3`, even overriding some already-installed states), constructs the placeholder JSON (`sub_14048FF80`) and writes it via `sub_1408726C0`, after first attempting to preserve any pre-existing real content as a backup, and records marker state.
- **Cleanup/restore path** (`cleanup`, 0x140497830): reads current state; per state value, either restores a validated real backup, removes an orphaned placeholder, or (state=Corrupt) leaves things untouched. Four inline closures (`__closure__1/2/3`) build error-wrapped results for specific failure branches within this state machine.
- **Legacy generation** (`legacy_virtual_auth::cleanup_0`, 0x14057a0e0): same conceptual state machine using a different marker filename convention; Windows evidence shows it delegating to the same underlying validation helpers (`read_user_owned_backup`) as the current generation, confirming it is a superseded implementation kept only for migration-era cleanup of any lingering old-format marker/backup, not an actively-installed path in 1.2.3.

## 2. auth.json structure (Windows-confirmed, byte-identical to macOS independently)

See `AI.md` for the full field table. Summary: the file impersonates the shape of a real OpenAI/ChatGPT-issued local credential file — same top-level field names a genuine OpenAI login would populate — but every value is a fixed, self-authored placeholder, and the file includes a self-disclosure string admitting it is not real.

## 3. Data flow (the part most relevant to "是否对外发送")

```
[no usable real OAuth login detected]
        │
        ▼
install_virtual_unlock_auth (0x1404949c0)
        │  backs up existing auth.json (if any) → local backup file
        │  builds placeholder JSON in-memory (sub_14048FF80)
        │  writes placeholder JSON → local auth.json path (sub_1408726C0)
        │  writes marker file recording "placeholder active" (local)
        ▼
[Codex-native login-state check reads auth.json from disk]
        │  (this read happens OUTSIDE the 19 functions read this pass —
        │   presumed to be inside the bundled/adjacent Codex CLI component,
        │   not independently confirmed this pass)
        ▼
[login-state check locally accepts the file as "logged in"]
        │
        ▼
[this app's own relay/router intercepts subsequent traffic,
 forwards to the user's configured provider — NOT to openai.com]
```

Every arrow above that touches `auth.json`/marker/backup content is **local filesystem only** (`sub_1408726C0` write, `sub_141485EF0` delete, `sub_14148D130`/`sub_14148D3C0` read, `sub_141473FA0` path join). Across all 19 functions read this pass, **zero call sites** invoke any HTTP/socket/network primitive with this data. The placeholder credential's bytes are never transmitted to `auth.openai.com` or any other network endpoint by the functions in this cluster — its only "audience" is whatever local process later reads the file from disk. This matches the macOS-side independent finding and is the basis for the README's "数据流向" conclusion.

Caveat: this pass did not trace what happens on the *consuming* side (the Codex-native login check itself, and whatever happens once the relay/router takes over real traffic) — that is a different module (`core::relay::router*`/`core::relay::codex_diagnostic`/actual Codex CLI code, if bundled) not read in this pass. The claim "never sent to OpenAI" is scoped strictly to the 19 functions read here (construction/lifecycle of the fake credential file itself), not a claim about the entire relay/router subsystem's network behavior.
