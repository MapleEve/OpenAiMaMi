// CALLEE (depth1 from owner): codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hd0b215828faba6dc
// ADDRESS: 0x1005c1610
// FULL decompiled size: 19355 bytes, 0 truncation (decompile_truncated=None) — full body was retrieved and inspected.
// This file is an ANNOTATED EXCERPT (not the full 19355-byte body) containing only the
// evidence-relevant call sites: the TCP liveness-probe branch and the two storage::save
// persistence-commit call sites, per the pipeline's chunked-inspection convention for
// oversized bodies (genuine_ceiling=false; full body was decompiled and read, not truncated
// or bailed on for size — only the archived excerpt is trimmed to avoid dumping ~19KB of
// generic mutex/panic-count/Arc-refcount boilerplate that is architecture noise, not delta).
// SIGNATURE:
//   volatile signed __int64 *__fastcall RelayManager::ensure_proxy_started::hd0b215828faba6dc(
//       __int64 a1, volatile signed __int64 **a2, double a3, double a4)

// --- Excerpt A: TCP liveness probe (depth2, terminated_reason=external_call) ---
// (full context: lines ~120-152 of the raw decompile)
//   std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v74, &v52, 0, 300000000); /*0x1005c1718*/
//   ... on failure: std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000);  // 50ms backoff
//   ...            std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v74, &v52, 0, 300000000); // retry
// IDENTICAL 300ms-timeout / 50ms-retry shape to the 1.0.9 macOS baseline
// (raw/aimami/1.0.9/macos/relay/load_relay_state/README.md step: "TcpStream::connect_timeout
// (proxy liveness check, 127.0.0.1:port, 300ms timeout, retry 50ms)"). No delta on this branch.

// --- Excerpt B: async proxy spawn via tokio, gated by Mutex/panic-count bookkeeping ---
// (full context: line ~199 of the raw decompile)
//   tokio::runtime::runtime::Runtime::block_on::ha7c40d421f206ad6(&v49, v73 + 2, &v52, &off_101534228); /*0x1005c18ba*/
// block_on drives the actual proxy-process spawn future to completion synchronously on this thread.

// --- Excerpt C: persistence-commit call sites (depth2, terminated_reason=persistence_commit) ---
// Two call sites exist (one on the "block_on already Err" fast-path around raw-decompile
// line 298, one on the normal post-spawn path around raw-decompile line 395). Both have the
// identical shape: mutate host/port/pid bookkeeping fields on the RelayManager's internal
// state struct at v19+80..154, then:
//
//   v25 = v23 + 2; /*0x1005c1cd5*/
//   codexmate_lib::core::relay::storage::save::h4619a27159e38d20(&v52, (__int64)(v23 + 2), v19 + 32, a3); /*0x1005c1cd8*/
//   if ( (_DWORD)v52 != 10 ) /*0x1005c1ce4*/
//     core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v52);
//   ... Mutex::unlock ...
//
//   (second call site, structurally identical, different field-init values before it):
//   v25 = v23 + 2; /*0x1005c1e5e*/
//   codexmate_lib::core::relay::storage::save::h4619a27159e38d20(&v52, (__int64)(v23 + 2), v19 + 32, a3); /*0x1005c1e61*/
//
// This confirms the baseline's documented side-effect ("On start success: writes initial
// state via storage::save -> atomic_write::write_atomic to relay.json") is unchanged in 1.1.8:
// same callee symbol, same call shape (result-code discriminant 10 == success sentinel, matches
// storage::save's own `*a1 = 10;` success-path store seen in pseudocode/0004).
//
// CALLEES (full list, confirmed via callees() on 0x1005c1610, 15 total):
//   std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0
//   std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd
//   std::sys::sync::once_box::OnceBox<T>::initialize::hf1a0da68c4a8085f
//   std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c
//   core::ptr::drop_in_place<Result<TcpListener,Error>>::h5e072ede2f9d0326
//   std::thread::functions::sleep::h8fc88f8bc00bad5c
//   log::GlobalLogger::log::h3cdc1ad4dece8a2d
//   alloc::sync::Arc<T,A>::drop_slow::h2a27c335bdc7a994 (+ ::hb60c2360c09e1b41 second monomorphization)
//   tokio::runtime::runtime::Runtime::block_on::ha7c40d421f206ad6
//   std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d
//   __rustc___rust_dealloc
//   alloc::fmt::format::format_inner::h3c16c74008a310d4
//   codexmate_lib::core::relay::storage::save::h4619a27159e38d20   <-- persistence_commit terminus (see 0004)
//   core::ptr::drop_in_place<CoreError>::h754f3a2a741d9d03
//   core::result::unwrap_failed::h855bccc0ecc45c4f (only via BUG()/panic path, exceptional)
