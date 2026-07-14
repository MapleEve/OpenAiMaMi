// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x1004304c0 depth=1
// tauri_plugin_dialog29MessageDialogBuilder::show
__int64 __fastcall tauri_plugin_dialog::MessageDialogBuilder$LT$R$GT$::show::h6e40bc3dfd5ae4a7(_QWORD *__src, void *a2)
{
  unsigned __int64 v2; // rax
  size_t v3; // r13
  char v4; // of
  volatile signed __int64 *v5; // r14
  __int64 v6; // rt0
  volatile signed __int64 *v7; // r15
  __int64 v8; // rt0
  void *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  volatile signed __int64 *__dst[41]; // [rsp+8h] [rbp-5B8h] BYREF
  _BYTE v14[176]; // [rsp+150h] [rbp-470h] BYREF
  size_t v15; // [rsp+200h] [rbp-3C0h]
  size_t v16; // [rsp+208h] [rbp-3B8h]
  size_t v17; // [rsp+210h] [rbp-3B0h]
  _BYTE v18[136]; // [rsp+218h] [rbp-3A8h] BYREF
  volatile signed __int64 *v19; // [rsp+2A0h] [rbp-320h]
  volatile signed __int64 *v20; // [rsp+2A8h] [rbp-318h]
  size_t __srca[66]; // [rsp+2B0h] [rbp-310h] BYREF
  unsigned __int64 v22; // [rsp+4C0h] [rbp-100h] BYREF
  __int64 v23; // [rsp+4C8h] [rbp-F8h]
  __int64 (__fastcall **v24)(); // [rsp+4D0h] [rbp-F0h]
  __int64 v25; // [rsp+4D8h] [rbp-E8h]
  __int64 v26; // [rsp+570h] [rbp-50h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+578h] [rbp-48h]
  __int64 v28; // [rsp+580h] [rbp-40h]
  size_t v29; // [rsp+588h] [rbp-38h]
  size_t v30; // [rsp+590h] [rbp-30h]

  v2 = 6; /*0x1004304f4*/
  if ( (__int64)__src[25] < 0 ) /*0x1004304f9*/
    v2 = __src[25] ^ 0x8000000000000000LL; /*0x1004304f9*/
  if ( v2 == 6 ) /*0x100430501*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10043054a*/
      __srca,
      (__int64)(__src + 25));
    goto LABEL_9; /*0x10043054a*/
  }
  if ( v2 == 5 || (v3 = 0x8000000000000000LL, v2 == 4) ) /*0x100430510*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100430520*/
      __srca,
      (__int64)(__src + 26));
LABEL_9:
    v3 = __srca[0]; /*0x10043054f*/
    v29 = __srca[1]; /*0x10043055d*/
    v30 = __srca[2]; /*0x100430568*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x10043056c*/
  memcpy(v14, a2, sizeof(v14)); /*0x100430592*/
  v15 = v3; /*0x100430597*/
  v16 = v29; /*0x1004305a6*/
  v17 = v30; /*0x1004305ad*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51( /*0x1004305be*/
    (__int64)__srca,
    (__int64)__dst);
  v5 = __dst[17]; /*0x1004305c3*/
  v6 = _InterlockedIncrement64(__dst[17]); /*0x1004305ca*/
  if ( (v6 < 0) ^ v4 | (v6 == 0) || (v7 = __dst[18], v8 = _InterlockedIncrement64(__dst[18]), (v8 < 0) ^ v4 | (v8 == 0)) ) /*0x1004305df*/
    BUG(); /*0x100430722*/
  memcpy(v18, __srca, sizeof(v18)); /*0x1004305f8*/
  v19 = v5; /*0x1004305fd*/
  v20 = v7; /*0x100430604*/
  memcpy(__srca, __dst, 0x148u); /*0x10043061e*/
  memcpy(&__srca[41], a2, 0xB0u); /*0x100430632*/
  __srca[63] = v3; /*0x100430637*/
  __srca[64] = v29; /*0x100430646*/
  __srca[65] = v30; /*0x10043064d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100430654*/
  v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x210u, 8u); /*0x100430663*/
  if ( !v9 ) /*0x10043066b*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 528); /*0x10043071d*/
  v10 = (__int64)v9; /*0x100430671*/
  memcpy(v9, __srca, 0x210u); /*0x100430683*/
  v23 = v10; /*0x100430688*/
  v24 = &anon_fdfbeb4f975d8e02b9c40da81dc33589_889; /*0x100430696*/
  LOBYTE(v22) = 28; /*0x10043069d*/
  tauri_runtime_wry::send_user_message::h77ed2756619c4a08(&v26, (__int64)v18, &v22); /*0x1004306b6*/
  if ( (_DWORD)v26 != 19 ) /*0x1004306bf*/
  {
    v25 = v28; /*0x1004306c5*/
    v24 = v27; /*0x1004306d4*/
    v23 = v26; /*0x1004306db*/
    v22 = 0x8000000000000000LL; /*0x1004306e2*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v22, v18, v11, v27); /*0x1004306f0*/
  }
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(v18); /*0x100430701*/
}