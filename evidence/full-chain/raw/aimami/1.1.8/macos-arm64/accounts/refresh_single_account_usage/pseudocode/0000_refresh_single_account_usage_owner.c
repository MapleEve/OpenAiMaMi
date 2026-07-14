// mac 1.1.8 refresh_single_account_usage node va=0x1000aa760 depth=0
// refresh_single_account_usage_owner
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..refresh_single_account_usage..$u7b$$u7b$closure$u7d$$u7d$$GT$::habcafdcae517a145(
        __int64 a1)
{
  __int64 v1; // rsi
  double result; // xmm0_8

  if ( *(_BYTE *)(a1 + 528) ) /*0x1000aa76a*/
  {
    if ( *(_BYTE *)(a1 + 528) == 3 ) /*0x1000aa778*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$$LP$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$C$core..option..Option$LT$alloc..string..String$GT$$RP$$C$codexmate_lib..commands..accounts..refresh_single_account_usage..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h5940e93f1a09df11(a1 + 328); /*0x1000aa781*/
      *(_WORD *)(a1 + 529) = 0; /*0x1000aa786*/
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1 + 176); /*0x1000aa79d*/
    }
  }
  else
  {
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1); /*0x1000aa7a5*/
    v1 = *(_QWORD *)(a1 + 152); /*0x1000aa7aa*/
    if ( v1 ) /*0x1000aa7b4*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 160), v1, 1); /*0x1000aa7c6*/
  }
  return result; /*0x1000aa799*/
}