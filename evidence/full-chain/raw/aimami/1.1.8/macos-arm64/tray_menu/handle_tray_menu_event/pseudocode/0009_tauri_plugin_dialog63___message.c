// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x100430d50 depth=1
// tauri_plugin_dialog63_::message
void *__fastcall tauri_plugin_dialog::_$LT$impl$u20$tauri_plugin_dialog..desktop..Dialog$LT$R$GT$$GT$::message::h16c03d17fe7a9897(
        void *__dst,
        __int64 a2,
        void *a3,
        __int64 a4)
{
  char v6; // of
  volatile signed __int64 *v7; // r15
  __int64 v8; // rt0
  volatile signed __int64 *v9; // r12
  __int64 v10; // rt0
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  _BYTE __src[152]; // [rsp+0h] [rbp-180h] BYREF
  _QWORD __dsta[19]; // [rsp+98h] [rbp-E8h] BYREF
  size_t v18; // [rsp+130h] [rbp-50h] BYREF
  __int64 v19; // [rsp+138h] [rbp-48h]
  __int64 v20; // [rsp+140h] [rbp-40h]
  __int64 v21; // [rsp+148h] [rbp-38h]
  void *v22; // [rsp+150h] [rbp-30h]

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x100430d77*/
    (__int64)__src,
    a2);
  v7 = *(volatile signed __int64 **)(a2 + 136); /*0x100430d7c*/
  v8 = _InterlockedIncrement64(v7); /*0x100430d84*/
  if ( (v8 < 0) ^ v6 | (v8 == 0) /*0x100430d97*/
    || (v9 = *(volatile signed __int64 **)(a2 + 144), v10 = _InterlockedIncrement64(v9), (v10 < 0) ^ v6 | (v10 == 0)) )
  {
    BUG(); /*0x100430e03*/
  }
  memcpy(__dsta, __src, 0x88u); /*0x100430dac*/
  __dsta[17] = v7; /*0x100430db1*/
  __dsta[18] = v9; /*0x100430db5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v18, (__int64)(v7 + 536)); /*0x100430dc7*/
  memcpy(__src, __dsta, sizeof(__src)); /*0x100430ddf*/
  v21 = v19; /*0x100430dec*/
  if ( a4 < 0 ) /*0x100430df3*/
  {
    v11 = 0; /*0x100430df5*/
    goto LABEL_5; /*0x100430df5*/
  }
  if ( a4 ) /*0x100430e05*/
  {
    v22 = a3; /*0x100430e07*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100430e0b*/
    v11 = 1; /*0x100430e10*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1u); /*0x100430e1e*/
    if ( !v12 ) /*0x100430e26*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, a4); /*0x100430df8*/
    v13 = v12; /*0x100430e28*/
    a3 = v22; /*0x100430e2b*/
  }
  else
  {
    v13 = 1; /*0x100430e31*/
  }
  memcpy((void *)v13, a3, a4); /*0x100430e40*/
  memcpy(__dst, __dsta, 0x98u); /*0x100430e54*/
  v14 = v19; /*0x100430e5d*/
  *((_QWORD *)__dst + 19) = v18; /*0x100430e61*/
  *((_QWORD *)__dst + 20) = v14; /*0x100430e68*/
  *((_QWORD *)__dst + 21) = v20; /*0x100430e73*/
  *((_QWORD *)__dst + 22) = a4; /*0x100430e7a*/
  *((_QWORD *)__dst + 23) = v13; /*0x100430e81*/
  *((_QWORD *)__dst + 24) = a4; /*0x100430e88*/
  *((_BYTE *)__dst + 320) = 0; /*0x100430e8f*/
  *((_QWORD *)__dst + 25) = 0x8000000000000000LL; /*0x100430ea1*/
  *((_DWORD *)__dst + 68) = 13; /*0x100430ea8*/
  return __dst; /*0x100430eb6*/
}