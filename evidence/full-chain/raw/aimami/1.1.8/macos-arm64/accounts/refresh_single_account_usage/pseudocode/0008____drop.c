// mac 1.1.8 refresh_single_account_usage node va=0x10049d2e0 depth=3
// _::drop
char __fastcall _$LT$crossbeam_channel..channel..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4e615eb6a13c2dae(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  signed __int64 v3; // rax
  __int64 v4; // rcx
  signed __int64 v5; // rtt

  v1 = *a1; /*0x10049d2e7*/
  v2 = a1[1]; /*0x10049d2ea*/
  if ( *a1 ) /*0x10049d2e7*/
  {
    if ( (_DWORD)v1 == 1 ) /*0x10049d2f6*/
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 384)) ) /*0x10049d2fc*/
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 128), 0) ) /*0x10049d30a*/
        {
          LOBYTE(v1) = *(_BYTE *)(v2 + 400); /*0x10049d31c*/
          *(_BYTE *)(v2 + 400) = 1; /*0x10049d31c*/
          if ( !(_BYTE)v1 ) /*0x10049d324*/
            return v1; /*0x10049d324*/
          goto LABEL_17; /*0x10049d324*/
        }
        crossbeam_channel::waker::SyncWaker::disconnect::h71459179ce7b84f1(v2 + 256); /*0x10049d3b1*/
        LOBYTE(v1) = *(_BYTE *)(v2 + 400); /*0x10049d3b8*/
        *(_BYTE *)(v2 + 400) = 1; /*0x10049d3b8*/
        if ( (_BYTE)v1 ) /*0x10049d3c0*/
        {
LABEL_17:
          core::ptr::drop_in_place$LT$crossbeam_channel..counter..Counter$LT$crossbeam_channel..flavors..list..Channel$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$::h30b0f49033861a36(v2); /*0x10049d3c2*/
          LOBYTE(v1) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049d3db*/
        }
      }
    }
    else if ( !_InterlockedDecrement64((volatile signed __int64 *)v2) ) /*0x10049d37f*/
    {
      crossbeam_channel::flavors::zero::Channel$LT$T$GT$::disconnect::h380411fdcf4c1cc1(v2 + 16); /*0x10049d38d*/
      LOBYTE(v1) = *(_BYTE *)(v2 + 136); /*0x10049d394*/
      *(_BYTE *)(v2 + 136) = 1; /*0x10049d394*/
      if ( (_BYTE)v1 ) /*0x10049d39c*/
        LOBYTE(v1) = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$crossbeam_channel..counter..Counter$LT$crossbeam_channel..flavors..zero..Channel$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$$GT$::h767c02f9044cd361(v2); /*0x10049d3a5*/
    }
  }
  else if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 512)) ) /*0x10049d32f*/
  {
    v3 = *(_QWORD *)(v2 + 128); /*0x10049d33d*/
    v4 = *(_QWORD *)(v2 + 272); /*0x10049d344*/
    do /*0x10049d35f*/
    {
      v5 = v3; /*0x10049d356*/
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 128), v4 | v3, v3); /*0x10049d356*/
    }
    while ( v5 != v3 ); /*0x10049d35f*/
    if ( (v3 & *(_QWORD *)(v2 + 272)) != 0 ) /*0x10049d368*/
    {
      LOBYTE(v1) = *(_BYTE *)(v2 + 528); /*0x10049d36c*/
      *(_BYTE *)(v2 + 528) = 1; /*0x10049d36c*/
      if ( !(_BYTE)v1 ) /*0x10049d374*/
        return v1; /*0x10049d374*/
    }
    else
    {
      crossbeam_channel::waker::SyncWaker::disconnect::h71459179ce7b84f1(v2 + 280); /*0x10049d3e7*/
      crossbeam_channel::waker::SyncWaker::disconnect::h71459179ce7b84f1(v2 + 352); /*0x10049d3f3*/
      LOBYTE(v1) = *(_BYTE *)(v2 + 528); /*0x10049d3fa*/
      *(_BYTE *)(v2 + 528) = 1; /*0x10049d3fa*/
      if ( !(_BYTE)v1 ) /*0x10049d402*/
        return v1; /*0x10049d402*/
    }
    LOBYTE(v1) = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$crossbeam_channel..counter..Counter$LT$crossbeam_channel..flavors..array..Channel$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$$GT$::h51a78fc6e9180c7f(v2); /*0x10049d40b*/
  }
  return v1; /*0x10049d3a1*/
}