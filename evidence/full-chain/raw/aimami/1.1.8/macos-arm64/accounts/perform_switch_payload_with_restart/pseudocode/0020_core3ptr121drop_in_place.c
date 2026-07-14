// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004edab0 depth=1
// core3ptr121drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..models..CoreSnapshotPayload$C$alloc..string..String$GT$$GT$::hdb0fbe45242a8a77(
        __int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)a1 == 3 ) /*0x1004edac4*/
  {
    if ( !*(_QWORD *)(a1 + 8) ) /*0x1004edacd*/
      return result; /*0x1004edacd*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004edacd*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(a1); /*0x1004edadd*/
  v2 = *(_QWORD *)(a1 + 672) + 1LL; /*0x1004edaf0*/
  v3 = *(_QWORD *)(a1 + 664); /*0x1004edaf3*/
  while ( v2 != 1 ) /*0x1004edb04*/
  {
    --v2; /*0x1004edb0d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v3); /*0x1004edb10*/
    v3 += 336; /*0x1004edb15*/
  }
  result = *(_QWORD *)(a1 + 656); /*0x1004edb1a*/
  if ( result ) /*0x1004edb24*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004edb35*/
  return result; /*0x1004edb39*/
}