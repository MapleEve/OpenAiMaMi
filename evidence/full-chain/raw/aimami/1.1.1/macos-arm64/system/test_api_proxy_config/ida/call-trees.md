# test_api_proxy_config — Call Trees
# AiMaMi 1.1.1 macOS arm64
# date: 2026-06-17

## Primary Call Tree (depth ≥ 5)

```
test_api_proxy_config [Tauri IPC command, codexmate_lib::commands::system]
  VA dispatch closure: 0x100131F30
  VA async body (BlockingTask::poll): 0x100598740
  │
  ├── load_api_request_context_from_repo  0x10061D900
  │     ├── StateManager::try_get         0x1005052F0   [Tauri state access]
  │     ├── OnceLock::initialize           0x100F7C920   [once-box init]
  │     ├── Mutex::lock                    0x100F2E7A0   [std::sync::Mutex]
  │     ├── Mutex::unlock                  0x100F2E7C0
  │     ├── load_auth_file                 0x10053AC80
  │     │     ├── std::fs::read_to_string  0x100F25740   [disk I/O]
  │     │     └── serde_json::from_str     0x1002E89B0   [JSON deserialize]
  │     └── make_api_request_context       0x10053E690
  │           ├── String::clone            0x100F656F0
  │           ├── decode_jwt_claims        0x10053AEF0   [JWT decode]
  │           ├── nested_dict              0x10053A9B0   [hashmap lookup]
  │           └── string_val               0x10053A7F0   [field extract]
  │
  └── test_api_connectivity               0x1006E5290
        ├── sanitize_proxy_config         0x1006E4D80
        │     ├── str::trim_matches        0x10057E620
        │     ├── url::ParseOptions::parse 0x100EF9030   [URL parse]
        │     └── format_inner             0x100F63980   [error formatting]
        │
        ├── http_client                    0x1006E3670
        │     ├── sanitize_proxy_config    0x1006E4D80   [called again for cache key]
        │     ├── OnceLock::initialize     0x100F77313
        │     ├── Mutex::lock/unlock       0x100F2E7A0 / 0x100F2E7C0
        │     ├── ClientBuilder::default   0x100B1F060   [reqwest]
        │     ├── IntoProxy::into_proxy    0x1006CDD20   [if proxy url present]
        │     ├── ClientBuilder::proxy     0x100B1EF70
        │     ├── ClientBuilder::build     0x100B1E720   [reqwest HTTP client]
        │     └── Arc::drop_slow           0x100B92B40   [evict old cache entry]
        │
        ├── reqwest::Client::request       0x100413F40   [HTTP GET]
        ├── RequestBuilder::header_sensitive 0x100414380  [base header]
        ├── [if auth_token] format_inner   0x100F63980   [Bearer {token}]
        ├── [if auth_token] header_sensitive 0x1004140E0, 0x1004145E0
        ├── RequestBuilder::send           0x100B08440   [blocking HTTP send]
        │
        ├── [on Err] alloc "network_error" str (13 bytes)
        │         reqwest::Error::fmt      0x100AECC00
        │
        └── [on Ok]  drop Response         0x1007404D0
                     Arc::drop_slow        0x100B92B40
```

---

## Companion Function: detect_api_proxy_config (NEW in 1.1.1)

```
detect_api_proxy_config  0x1006E5A60
  [IPC: detect_api_proxy_config, no params]
  Returns: CoreEnvelope<ApiProxyDetectPayload>
  │
  ├── detect_system_proxy_candidates     0x100786860
  │     ├── Command::new("scutil")       0x100F31AC0   [subprocess: reads macOS proxy]
  │     ├── Command::arg("--proxy")      0x100F31920
  │     ├── Command::output()            0x100F36130   [blocking exec]
  │     ├── String::from_utf8_lossy      0x100F65430
  │     ├── str::trim_matches            0x10057E620
  │     ├── push_url                     0x100788B10   [dedup candidate list]
  │     ├── dedupe                        0x100788700
  │     ├── ClientBuilder::default       0x100B1F060   [test each candidate]
  │     ├── ClientBuilder::build         0x100B1E720
  │     ├── Client::request              0x100413F40
  │     └── RequestBuilder::send         0x100B08440
  │
  ├── [env vars] read HTTPS_PROXY, HTTP_PROXY, ALL_PROXY, https_proxy, http_proxy, all_proxy
  │    → url::ParseOptions::parse        0x100EF9030
  │    → url::Url::host_str             0x100EFC000
  │    → url::default_port              0x100EFD8A0
  │
  ├── [hardcoded local addrs] try_connect_local_proxy  0x1006E6A10
  │     addresses tested:
  │       http://127.0.0.1:7890, http://localhost:7890
  │       socks5://127.0.0.1:7891, socks5://localhost:7891
  │       http://127.0.0.1:7892, http://localhost:7892
  │       socks5://127.0.0.1:10808, socks5://localhost:10808
  │       http://127.0.0.1:10809, http://localhost:10809
  │       http://127.0.0.1:8080, http://localhost:8080
  │       socks5://127.0.0.1:1080, socks5://localhost:1080
  │       http://127.0.0.1:7893, http://localhost:7893
  │       http://127.0.0.1:20171, http://localhost:20171
  │       http://127.0.0.1:9090, http://localhost:9090
  │     └── TcpStream::connect_timeout  0x100F29BD0   [socket probe, no HTTP]
  │
  └── test_api_connectivity              0x1006E5290   [reuses same fn]
```

---

## set_api_proxy_config (write companion)

```
set_api_proxy_config  0x100619780   [IPC: set_api_proxy_config]
  ├── Mutex::lock/unlock
  └── Repository::set_api_proxy_config  0x1004C6F40
        ├── sanitize_proxy_config        0x1006E4D80   [validates before persist]
        ├── Repository::load_settings    0x1004BFA30
        ├── Repository::save_settings    0x1004C00C0   [writes to disk]
        └── CoreEnvelope::ok             0x1005572E0
```
