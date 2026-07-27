// IDA Hex-Rays decompile evidence
// addr: 0x100a04650
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..window..Window..on_window_event$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h3a9e56d161638b34(
        __int64 a1)
{
  core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(); /*0x100a0465a*/
  return core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(a1 + 536); /*0x100a04669*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100a08d20  __ZN4core3ptr42drop_in_place$LT$tauri..window..Window$GT$17h00a1cd5478c8773eE_9
// 0x100a096f0  __ZN4core3ptr44drop_in_place$LT$tauri..webview..Webview$GT$17h4246a4a063072089E_11
