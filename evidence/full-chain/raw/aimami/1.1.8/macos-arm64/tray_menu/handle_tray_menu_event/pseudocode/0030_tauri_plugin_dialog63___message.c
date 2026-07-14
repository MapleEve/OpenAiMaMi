// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x100430f10 depth=1
// tauri_plugin_dialog63_::message
_QWORD *__fastcall tauri_plugin_dialog::_$LT$impl$u20$tauri_plugin_dialog..desktop..Dialog$LT$R$GT$$GT$::message::h4c0a788a30f542b1(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3)
{
  char v4; // of
  volatile signed __int64 *v5; // r15
  __int64 v6; // rt0
  volatile signed __int64 *v7; // r12
  __int64 v8; // rt0
  __int64 v9; // rax
  size_t v10; // rcx
  _QWORD __dsta[19]; // [rsp+0h] [rbp-140h] BYREF
  size_t __src[21]; // [rsp+98h] [rbp-A8h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x100430f32*/
    (__int64)__src,
    a2);
  v5 = *(volatile signed __int64 **)(a2 + 136); /*0x100430f37*/
  v6 = _InterlockedIncrement64(v5); /*0x100430f3f*/
  if ( (v6 < 0) ^ v4 | (v6 == 0) /*0x100430f56*/
    || (v7 = *(volatile signed __int64 **)(a2 + 144), v8 = _InterlockedIncrement64(v7), (v8 < 0) ^ v4 | (v8 == 0)) )
  {
    BUG(); /*0x10043102d*/
  }
  memcpy(__dsta, __src, 0x88u); /*0x100430f6f*/
  __dsta[17] = v5; /*0x100430f74*/
  __dsta[18] = v7; /*0x100430f7b*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, (__int64)(v5 + 536)); /*0x100430f93*/
  __dst[24] = a3[2]; /*0x100430f9c*/
  v9 = *a3; /*0x100430fa3*/
  __dst[23] = a3[1]; /*0x100430faa*/
  __dst[22] = v9; /*0x100430fb1*/
  memcpy(__dst, __dsta, 0x98u); /*0x100430fc7*/
  v10 = __src[1]; /*0x100430fd3*/
  __dst[19] = __src[0]; /*0x100430fda*/
  __dst[20] = v10; /*0x100430fe1*/
  __dst[21] = __src[2]; /*0x100430fef*/
  *((_BYTE *)__dst + 320) = 0; /*0x100430ff6*/
  __dst[25] = 0x8000000000000000LL; /*0x100431008*/
  *((_DWORD *)__dst + 68) = 13; /*0x10043100f*/
  return __dst; /*0x10043101d*/
}