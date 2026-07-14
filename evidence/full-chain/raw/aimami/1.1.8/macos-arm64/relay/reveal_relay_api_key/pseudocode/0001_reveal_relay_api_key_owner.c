// owner_va=0x1004c48d0
// owner_symbol=codexmate_lib::commands::relay::reveal_relay_api_key::hbc8d3f25d5bb8ef1
// source: 反编译器 MCP (mac) decompile, live 1.1.8 universal.app x86_64 slice, 反编译就绪=true
// module=commands::relay (owner-map-118.jsonl: {"command": "reveal_relay_api_key", "module": "commands::relay", "owner_va": "0x1004c48d0", "owner_symbol": "__ZN13codexmate_lib8commands5relay20reveal_relay_api_key17hbc8d3f25d5bb8ef1E", "source": "func_query_clean_top_level_symbol"})
// size=0x123(291B) instructions=69 basic_blocks=9 caller_count=1 callee_count=6
// sole caller: codexmate_lib::run::{{closure}}::{{closure}} @0x1002fda80 (IPC dispatch closure -- live, dispatcher-wired, not dead code)

__int64 __fastcall codexmate_lib::commands::relay::reveal_relay_api_key::hbc8d3f25d5bb8ef1(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  _WORD *v5; // rax
  _WORD *v6; // r12
  _DWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD v10[7]; // [rsp+8h] [rbp-38h] BYREF

  v4 = a3[1]; /*0x1004c48e5*/
  codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::h7af825f0a90d84c9(v10, a2, v4, a3[2]); /*0x1004c48f4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x1004c48f9*/
  v5 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004c4908*/
  if ( !v5 ) /*0x1004c4910*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004c49db*/
  v6 = v5; /*0x1004c4916*/
  *v5 = 27503; /*0x1004c4919*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1004c491e*/
  v7 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004c492d*/
  if ( !v7 ) /*0x1004c4935*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004c49ec*/
  *(_DWORD *)((char *)v7 + 3) = 1936942435; /*0x1004c493b*/
  *v7 = 1667462483; /*0x1004c4942*/
  *(_QWORD *)(a1 + 88) = v10[2]; /*0x1004c494c*/
  v8 = v10[0]; /*0x1004c4950*/
  *(_QWORD *)(a1 + 80) = v10[1]; /*0x1004c4958*/
  *(_QWORD *)(a1 + 72) = v8; /*0x1004c495c*/
  *(_QWORD *)a1 = 2; /*0x1004c4960*/
  *(_QWORD *)(a1 + 8) = v6; /*0x1004c4967*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1004c496b*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004c4973*/
  *(_QWORD *)(a1 + 32) = v7; /*0x1004c497b*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004c497f*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004c4987*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004c498f*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004c4997*/
  *(_DWORD *)(a1 + 96) = 1; /*0x1004c499f*/
  *(_BYTE *)(a1 + 100) = 1; /*0x1004c49a7*/
  if ( *a3 ) /*0x1004c49ac*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, *a3, 1); /*0x1004c49bc*/
  return a1; /*0x1004c49c4*/
}
