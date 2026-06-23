# test_api_proxy_config — AiMaMi 1.1.1 macOS arm64
# delta_class: integrity_recovered
# session: <审计会话>
# machine: <本地机器>
# date: 2026-06-17

## Owner

- **IPC command name**: `test_api_proxy_config`
- **IPC param**: `url: String` (parsed via `CommandArg::from_command` key="url")
- **Module**: `codexmate_lib::commands::system`
- **Tauri dispatch closure VA**: `0x100131F30`
- **Async fn body (BlockingTask::poll) VA**: `0x100598740`
- **Return type**: `CoreEnvelope<ApiConnectivityResult>`

---

## Pseudocode — Async fn body (0x100598740)

```rust
// codexmate_lib::commands::system::test_api_proxy_config
// Tauri #[command] async fn test_api_proxy_config(app: AppHandle, url: String)
//   -> Result<CoreEnvelope<ApiConnectivityResult>, String>

pub async fn test_api_proxy_config(app: AppHandle, url: String)
    -> CoreEnvelope<ApiConnectivityResult>
{
    // Step 1: load auth context from repo (reads saved proxy URL + auth file)
    let ctx_result = load_api_request_context_from_repo(&app, &url);  // 0x10061D900

    match ctx_result {
        Err(e) => {
            // returns CoreEnvelope with error payload
            return CoreEnvelope::err(e);
        }
        Ok((request_ctx, opt_token)) => {
            // Step 2: test connectivity using the validated proxy config
            let conn_result = test_api_connectivity(
                &request_ctx,          // ApiRequestContext (proxy config, base url)
                opt_token.as_deref()   // Option<&str> auth token (None = no auth header)
            );  // 0x1006E5290

            // Step 3: wrap in CoreEnvelope and return
            CoreEnvelope::ok(conn_result)  // 0x100557180
        }
    }
}
```

---

## Pseudocode — load_api_request_context_from_repo (0x10061D900)

```rust
fn load_api_request_context_from_repo(app: &AppHandle, url: &str)
    -> Result<(ApiRequestContext, Option<String>), CoreError>
{
    // acquire Mutex from Tauri StateManager (panics if state not registered)
    let state = StateManager::try_get::<ProxyConfigState>(app).unwrap();
    let guard = state.lock();   // std::sync::Mutex

    if guard.proxy_config_enabled {
        // read stored proxy URL from repo field
        let stored_url = guard.stored_url.clone();  // String

        // unlock before disk I/O
        drop(guard);

        // read auth file from disk and deserialize JSON
        let auth_data = load_auth_file(&stored_url)?;  // 0x10053AC80
        //   internally: std::fs::read_to_string + serde_json::from_str

        // build request context (extracts token via JWT decode)
        let ctx = make_api_request_context(&auth_data)?;  // 0x10053E690
        //   internally: clone String, decode_jwt_claims, nested_dict, string_val

        Ok(ctx)
    } else {
        // proxy config not enabled — return Err with formatted message
        // error string: "Proxy config not set" (format_inner via Display)
        Err(CoreError::new("Proxy config not set"))  // returns 0x8000000000000001 sentinel
    }
}
```

---

## Pseudocode — test_api_connectivity (0x1006E5290)

```rust
fn test_api_connectivity(
    request_ctx: &ApiRequestContext,   // contains proxy config + base_url
    auth_token: Option<&str>           // if Some: set as Bearer header
) -> ApiConnectivityResult
{
    // Step A: validate proxy config
    let validated = sanitize_proxy_config(&request_ctx.proxy_config)?;
    // 0x1006E4D80 — returns Ok(url_string) or Err

    if validated.is_err() {
        return ApiConnectivityResult::err("invalid_config");
        // or "Manual proxy mode requires a proxy URL" if url was empty
    }

    // Step B: get or build HTTP client
    let client = http_client(&validated)?;  // 0x1006E3670
    // returns Err("client_build_failed") if reqwest::ClientBuilder::build fails

    // Step C: build request
    let mut rb = client.request(method, url);   // reqwest::blocking::Client::request
    rb = rb.header_sensitive(key, val, false);  // base header

    if let Some(token) = auth_token {
        // format "Bearer {token}" via format_inner, set as header
        let bearer = format!("Bearer {}", token);
        rb = rb.header_sensitive(auth_key, bearer);
        rb = rb.header_sensitive(auth_key2, bearer2);
    }

    // Step D: send
    match rb.send() {
        Err(e) => {
            // alloc "network_error" code string (13 bytes)
            // format error message via reqwest::error::Error::fmt
            ApiConnectivityResult {
                code: "network_error",
                success: false,
                http_status: 0,
                message: format!("{}", e),
            }
        }
        Ok(resp) => {
            // success: determine connection mode label
            let mode_label = if proxy_was_used {
                // proxy URL label from unk_101157820
                proxy_label_str
            } else {
                "direct connection"
            };
            let status_code = resp.status();  // u16 stored at a1+52

            // alloc 2-byte "ok" code ("ok" = 0x6B6F = 27503 LE)
            ApiConnectivityResult {
                code: "ok",           // u16 27503
                success: true,
                http_status: status_code,
                message: format!("{} {}", mode_label, status_code),
            }
        }
    }
}
```

---

## Pseudocode — sanitize_proxy_config (0x1006E4D80)

```rust
fn sanitize_proxy_config(cfg: &ProxyConfig) -> Result<String, CoreError> {
    // ProxyConfig layout:
    //   +0x18: mode byte (0=None/Auto, 1=Manual, ...)
    //   +0x00: url_ptr sentinel (0x8000_0000_0000_0000 = None)
    //   +0x08: url ptr
    //   +0x10: url len

    if cfg.mode != 1 {  // not Manual
        // return Ok sentinel (discriminant=10, url=None sentinel)
        return Ok(ProxyConfigResult::auto_or_none());
    }
    if cfg.url.is_none() || cfg.url.as_deref() == Some("") {
        // "Manual proxy mode requires a proxy URL"
        return Err(CoreError::proxy_url_required());
    }

    let url_str = cfg.url.as_deref().unwrap().trim_matches(' ');

    // parse with url crate
    let parsed = url::ParseOptions::parse(url_str)?;
    // if parse fails: return Err with formatted parse error

    // validate scheme
    let scheme = parsed.scheme();
    let valid = match scheme.len() {
        4 => scheme == "http",
        5 => scheme == "https",
        6 => scheme == "socks5",
        7 => scheme == "socks5h",
        _ => false,
    };

    if valid {
        Ok(url_str.to_string())  // return validated URL
    } else {
        // "Unsupported proxy scheme: {scheme}"
        Err(CoreError::unsupported_scheme(scheme))
    }
}
```

---

## Pseudocode — http_client (0x1006E3670)

```rust
// Global cache keyed by (proxy_url_hash, proxy_has_auth_flag, proxy_mode_byte)
// Globals: CLIENT OnceLock (0x101442DB8), cache mutex (0x101442DC0),
//   cached_url (qword_101442DD0/DE0/DD8), cached_arc (qword_101442DF0/DF8)

fn http_client(validated_proxy: &ValidatedProxy) -> Result<Arc<reqwest::blocking::Client>, CoreError> {
    // ensure OnceLock initialized
    OnceLock::initialize(&CLIENT);

    // lock cache mutex
    let _guard = Mutex::lock(&CACHE_MUTEX);

    // check if cached client matches current proxy config
    if cache_matches(validated_proxy) {
        // cache hit: Arc::clone (InterlockedIncrement64)
        return Ok(Arc::clone(&CACHED_CLIENT));
    }

    // cache miss: build new client
    let mut builder = ClientBuilder::default();
    builder.timeout(5);  // __src[117]=5, __src[118]=0

    if validated_proxy.has_proxy_url() {
        // reqwest::IntoProxy::into_proxy(url_str)
        match IntoProxy::into_proxy(&validated_proxy.url) {
            Ok(proxy) => builder = builder.proxy(proxy),
            Err(e) => return Err(CoreError::from(e)),
        }
    }

    match builder.build() {
        Ok(client) => {
            // drop old cached Arc (InterlockedDecrement + drop_slow if zero)
            drop_old_cached_client();
            // store new Arc
            CACHED_CLIENT = Arc::new(client);
            CACHED_PROXY_KEY = validated_proxy.cache_key();
            Ok(Arc::clone(&CACHED_CLIENT))
        }
        Err(_) => Err(CoreError::new("client_build_failed")),
    }
}
```
