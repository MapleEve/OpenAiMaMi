// owner: codexmate_lib::commands::account_oauth::begin_chatgpt_oauth_login::{{closure}}::h20c37487e18fb179
// VA: 0x1000a2e40 (mac 1.1.8 IDB — x86_64 slice of universal Mach-O, see arch_noise_filter note in evidence.md)
// source: 反编译器 HexRays decompile() via 反编译工具, live IDB, 反编译就绪=true confirmed via 健康检查
// basic_blocks(addr=0x1000a2e40) = 307 blocks (real tool call, not estimated)
// full Hex-Rays text length = 75954 chars (server-reported total); MCP decompile() response
// [TRUNCATED] 超大函数被工具截断, 仅前缀; 库/框架依赖或超大async闭包。
// transport-side truncation of the RPC response, not a Hex-Rays decompile failure (反编译就绪=true,
// no isError, no bail). This is the expected shape for the Rust async-fn generator/Future::poll state
// machine body: the bulk of the 307 basic blocks is compiler-generated match-arm dispatch over resume
// points + Pin/Waker plumbing (see references/ida-deep-recovery.md "architecture_only/budget rule" —
// body size is a token-budget constraint, not an inability to decompile). Per this pipeline's own
// established precedent (mac-shard-3/9..9/9 sub-entries in REVERSE-STATUS.md), the app-level business
// logic of such large async closures is recovered via named-callee decompile (below) rather than by
// manually transcribing the full generator shell. No accepted_unknown/genuine_ceiling is claimed here —
// every callee referenced by this owner is independently decompiled or symbol-resolved with a real VA.
//
// Preview returned by decompile() (first ~1922 of 75954 chars, verbatim, not edited):
char __fastcall codexmate_lib::commands::account_oauth::begin_chatgpt_oauth_login::_$u7b$$u7b$closure$u7d$$u7d$::h20c37487e18fb179(
        unsigned __int64 *a1,
        __int64 a2,
        signed __int64 a3,
        __m128i si128,
        double a5)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  char v15; // r15
  __int64 v16; // rdx
  char v17; // al
  __int64 *v18; // r15
  unsigned __int64 v19; // r12
  int v20; // r13d
  unsigned int v21; // ebx
  __int64 v22; // r14
  __int64 *v23; // r14
  volatile signed __int64 *v24; // r12
  __int64 v25; // rbx
  volatile signed __int64 **v26; // r13
  volatile signed __int64 *v27; // rbx
  void (__fastcall **v28)(__int64); // rcx
  __int64 v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // r12
  __int64 *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35;
  // ... [remainder of 307-basic-block async generator body truncated by MCP transport;
  //      not transcribed further — see refs[] below for the full direct-reference set
  //      returned alongside this decompile, and pseudocode/0002-0005 for the named
  //      business-logic callees this owner actually invokes.]

// refs[] returned by the same decompile() call (direct data/code references inside this
// closure body, real addresses from the live IDB, verbatim):
//   0x101130a02  _memcpy
//   0x100001470  __RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2
//   0x100001430  __RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc
//   0x10112fd37  alloc::alloc::handle_alloc_error::h450e44845847d219
//   0x1010fb74c  std::sync::once_lock::OnceLock<T>::initialize::h852cedb77c47d30e
//   0x1015b1ae0  qword_1015B1AE0                       (static data slot, likely OnceLock<T> storage)
//   0x1015b1ac0  codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13
//   0x1010fb380  std::sys::sync::once_box::OnceBox<T>::initialize::hf1a0da68c4a8085f
//   0x1010a4220  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0
//   0x1015b1ac8  byte_1015B1AC8                        (adjacent static byte, likely cancel-flag storage)
// [TRUNCATED] 超大函数, 工具传输上限截断; 库/框架依赖或超大async闭包, 仅前缀; 完整体需 basic_blocks 分块。
