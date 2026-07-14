// mac 1.1.8 refresh_single_account_usage node va=0x1004852d0 depth=4
// core3ptr170drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$crossbeam_channel..counter..Counter$LT$crossbeam_channel..flavors..list..Channel$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$::h30b0f49033861a36(
        __int64 a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v2; // r12
  unsigned __int64 i; // r15
  pthread_mutex_t *v4; // r15
  _QWORD *v6; // r13
  __int64 v7; // rax

  v1 = *(_QWORD **)(a1 + 8); /*0x1004852eb*/
  v2 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFELL; /*0x1004852ef*/
  for ( i = *(_QWORD *)(a1 + 128) & 0xFFFFFFFFFFFFFFFELL; i != v2; v2 += 2LL ) /*0x1004852fa*/
  {
    v7 = ((unsigned int)v2 >> 1) & 0x1F; /*0x10048539a*/
    if ( (_DWORD)v7 == 31 ) /*0x1004853a0*/
    {
      v6 = (_QWORD *)*v1; /*0x100485370*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100485380*/
      v1 = v6; /*0x100485385*/
    }
    else
    {
      core::ptr::drop_in_place$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$::h902bc30b45adeba4(&v1[23 * v7 + 1]); /*0x1004853ae*/
    }
  }
  if ( v1 ) /*0x100485303*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100485312*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 256)); /*0x100485321*/
  v4 = *(pthread_mutex_t **)(a1 + 256); /*0x100485326*/
  *(_QWORD *)(a1 + 256) = 0; /*0x10048532a*/
  if ( v4 ) /*0x100485335*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v4); /*0x10048533a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10048534c*/
  }
  return core::ptr::drop_in_place$LT$crossbeam_channel..waker..Waker$GT$::h002080804afd06f8(a1 + 272); /*0x10048535f*/
}